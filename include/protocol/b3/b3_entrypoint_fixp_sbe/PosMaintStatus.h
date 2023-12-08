/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_POSMAINTSTATUS_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_POSMAINTSTATUS_CXX_H_

#if !defined(__STDC_LIMIT_MACROS)
#  define __STDC_LIMIT_MACROS 1
#endif

#include <cstdint>
#include <iomanip>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <sstream>
#include <string>

#define SBE_NULLVALUE_INT8 (std::numeric_limits<std::int8_t>::min)()
#define SBE_NULLVALUE_INT16 (std::numeric_limits<std::int16_t>::min)()
#define SBE_NULLVALUE_INT32 (std::numeric_limits<std::int32_t>::min)()
#define SBE_NULLVALUE_INT64 (std::numeric_limits<std::int64_t>::min)()
#define SBE_NULLVALUE_UINT8 (std::numeric_limits<std::uint8_t>::max)()
#define SBE_NULLVALUE_UINT16 (std::numeric_limits<std::uint16_t>::max)()
#define SBE_NULLVALUE_UINT32 (std::numeric_limits<std::uint32_t>::max)()
#define SBE_NULLVALUE_UINT64 (std::numeric_limits<std::uint64_t>::max)()

namespace b3 {
namespace entrypoint {
namespace fixp {
namespace sbe {

class PosMaintStatus
{
public:
    enum Value
    {
        ACCEPTED = static_cast<char>(48),
        REJECTED = static_cast<char>(50),
        COMPLETED = static_cast<char>(51),
        NOT_EXECUTED = static_cast<char>(57),
        NULL_VALUE = static_cast<char>(0)
    };

    static PosMaintStatus::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(48): return ACCEPTED;
            case static_cast<char>(50): return REJECTED;
            case static_cast<char>(51): return COMPLETED;
            case static_cast<char>(57): return NOT_EXECUTED;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum PosMaintStatus [E103]");
    }

    static const char *c_str(const PosMaintStatus::Value value)
    {
        switch (value)
        {
            case ACCEPTED: return "ACCEPTED";
            case REJECTED: return "REJECTED";
            case COMPLETED: return "COMPLETED";
            case NOT_EXECUTED: return "NOT_EXECUTED";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum PosMaintStatus [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, PosMaintStatus::Value m)
    {
        return os << PosMaintStatus::c_str(m);
    }
};

}
}
}
}

#endif
