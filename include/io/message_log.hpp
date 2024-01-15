#ifndef __MESSAGE_LOG__
#define __MESSAGE_LOG__

#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

#include <filesystem>
#include <format>
#include <ios>

namespace io
{

    class message_log_write
    {
    public:
        message_log_write(std::filesystem::path __path) : _M_fd(0), _M_path(__path)
        {
            if (std::filesystem::exists(_M_path))
            {
              //  sanitizer();
            }
            auto ret = posix_memalign((void**)&_M_alligned_buffer, BLOCK_SIZE, BUFFER_SIZE);
            if(ret != 0)
            {
                throw std::bad_alloc();
            }
            wopen();
        }

        ~message_log_write()
        {
            close(_M_fd);
            free(_M_alligned_buffer);
        }

        void write (const char* __buffer, std::size_t __length)
        {
            write((char *)__buffer, __length);
        }

        void write(char *__buffer, std::size_t __length)
        {
            memcpy(_M_alligned_buffer, __buffer, __length);
            auto totWrite = ::write(_M_fd, _M_alligned_buffer, BUFFER_SIZE);
            if(totWrite == -1)
            {
                throw std::ios_base::failure(std::vformat(MSG_ERROR_TO_WRITE, std::make_format_args(_M_path.c_str())));
            }
            if (totWrite != BLOCK_SIZE)
            {
                throw std::ios_base::failure(std::vformat(MSG_ERROR_TO_WRITE_MISSING_BYTES, 
                        std::make_format_args(BLOCK_SIZE, totWrite)));
            }
        }

    private:
        constexpr static const auto MSG_ERROR_OPEN_FILE = "Cannot Open file: {} {}";
        constexpr static const auto MSG_ERROR_TO_WRITE = "Error to Write in file: {}";
        constexpr static const auto MSG_ERROR_TO_WRITE_MISSING_BYTES = "Missing write bytes: total expected {} total write {}";
        constexpr static const auto BLOCK_SIZE = 512;
        constexpr static const auto BUFFER_SIZE = BLOCK_SIZE * 4;
        /**
         * The file structure is  std::size_t | buffer msg | std::size_t,
         * so the sanitizer check the last message where the header is aways equals to tail
         */
        bool sanitizer()
        {
            // check integrity of the last message
            auto tmpFd = open(_M_path.c_str(), O_RDONLY);
            if (tmpFd == -1)
            {
                // break throw
                throw std::ios_base::failure(std::vformat(MSG_ERROR_OPEN_FILE, std::make_format_args(_M_path.c_str(), "to read")));
            }
            auto ret = lseek(tmpFd, -1 * sizeof(std::size_t), SEEK_END); /*Last byte of file*/
            std::size_t msgSz = 0x00;
            ret = read(tmpFd, &msgSz, sizeof(std::size_t));
            ret = lseek(tmpFd, -1 * ((2 * sizeof(std::size_t)) + msgSz), SEEK_END);
            std::size_t checkMsgSz = 0x00;
            ret = read(tmpFd, &checkMsgSz, sizeof(std::size_t));
            close(tmpFd);
            return checkMsgSz == msgSz;
        }

        void wopen()
        {
            auto mode = S_IRUSR | S_IWUSR | S_IRGRP |  S_IROTH;
            auto flags = O_CREAT | O_APPEND | O_DIRECT | O_WRONLY;
            _M_fd = open(_M_path.c_str(), flags, mode);
            if (_M_fd == -1)
            {
                throw std::ios_base::failure(std::vformat(MSG_ERROR_OPEN_FILE, std::make_format_args(_M_path.c_str(), "to write")));
            }
        }

        int _M_fd;
        std::filesystem::path _M_path;
        char _M_padding[2048];
        char* _M_alligned_buffer;
    };
};
#endif