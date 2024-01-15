//
// Created by santana on 12/1/23.
//

#ifndef ENTRYPOINT_SESSION_HPP
#define ENTRYPOINT_SESSION_HPP

// Stage Initialization
#include "b3_entrypoint_fixp_sbe/Negotiate.h"
#include "b3_entrypoint_fixp_sbe/NegotiateReject.h"
#include "b3_entrypoint_fixp_sbe/NegotiateResponse.h"
// Binding
#include "b3_entrypoint_fixp_sbe/Establish.h"
#include "b3_entrypoint_fixp_sbe/EstablishAck.h"
#include "b3_entrypoint_fixp_sbe/EstablishReject.h"
// Transferring
#include "b3_entrypoint_fixp_sbe/NotApplied.h"
#include "b3_entrypoint_fixp_sbe/Retransmission.h"
#include "b3_entrypoint_fixp_sbe/RetransmitReject.h"
#include "b3_entrypoint_fixp_sbe/RetransmitRequest.h"
#include "b3_entrypoint_fixp_sbe/Sequence.h"
// Terminate
#include "b3_entrypoint_fixp_sbe/Terminate.h"

#include <cstdint>
#include <string>
#include <string_view>
#include <format>
#include <functional>


#include "io/tcp_client.hpp"

namespace b3::entrypoint::session {

  enum class Stage { Disconnected, Initialization, Binding, Transferring, Unbinding };
  enum class ErrorCode {
    NO_ERROR,
    DISCONNECTED,
    INITIALIZING_STAGE,
    CONNECTED
  };

  struct address {
    std::string ip;
    short port;
  };

  struct auth {
    constexpr static const auto negotiate_json =
        R"({{ "auth_type" : "{}",
            "username": "{}",
            "access_key":"{}"}})";

    std::string type;
    std::string username;
    std::string access_key;

    std::string get_json() {

	    return std::vformat(negotiate_json, std::make_format_args(type.c_str(), 
				    username.c_str(), access_key.c_str()));
    }
  };

  struct config {
    address addr;
    auth cred;
  };

  struct session_notification {
    std::function<void(Stage)> on_status;
    std::function<void()> on_exection_report;
  };

  class session_manager 
  {
    session_manager(config __config, std::shared_ptr<session_notification> __notify) : 
    _M_stage(Stage::Disconnected),
      _M_config(__config),
      _M_notify(__notify) {

    }

    ErrorCode connect()
    {
      if (_M_stage != Stage::Disconnected)
      {
        return ErrorCode::CONNECTED;
      }

      if(_M_tcp_client == nullptr)
      {
        _M_tcp_client = std::make_unique<tcp_client>([&](const char* __buffer, std::size_t __length){
            buffer_received((char* )__buffer, __length);
        });
      }

      if(_M_tcp_client->connect_to(_M_config.addr.ip, std::to_string(_M_config.addr.port)) != 0x00)
      {
        return ErrorCode::DISCONNECTED;
      }
      
      return initialization();

    }

    

    ErrorCode send(char* __buffer, std::size_t __length)
    {
        if(_M_stage != Stage::Transferring)
        {
           return ErrorCode::INITIALIZING_STAGE;
        }
        _M_tcp_client->send(__buffer, __length);
        return ErrorCode::NO_ERROR;
    }

    private:

    void estabilish(const b3::protocol::csbe_message& msg)
    {

    }

    void buffer_received(char* __buffer, std::size_t __length)
    {
        std::size_t offset = 0x00;
        do
        {
            b3::protocol::csbe_message sbe_msg(__buffer, offset, __length);
            offset += sbe_msg.length();

            switch (sbe_msg.type())
            {
              //USER MGS
              //ADM MSGS
              case fixp::sbe::Sequence::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::NegotiateResponse::SBE_TEMPLATE_ID:
              {
                estabilish(sbe_msg);
                break;
              }
              case fixp::sbe::NegotiateReject::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::EstablishAck::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::EstablishReject::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::Retransmission::SBE_TEMPLATE_ID:
              {
                break;
              } 
              case fixp::sbe::RetransmitReject::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::NotApplied::SBE_TEMPLATE_ID:
              {
                break;
              }
              case fixp::sbe::Terminate::SBE_TEMPLATE_ID:
              {
                break;
              }
            }
        } while (offset < __length);
        
    }

    ErrorCode initialization()
    {
      __build_negotiate();
      _M_tcp_client->send(_M_buffer, _M_bufferLength);
      return ErrorCode::NO_ERROR;
    }

    void __build_negotiate()
    {
      using namespace b3::entrypoint::fixp::sbe;
      auto header = MessageHeader(_M_buffer, BUFFER_SIZE, 0);
      auto msg = Negotiate(_M_buffer, MessageHeader::encodedLength(), BUFFER_SIZE,
                           header.blockLength(), header.actingVersion());
      msg.putCredentials(std::string_view(_M_config.cred.get_json()));
      _M_bufferLength = msg.encodedLength();
    }

    constexpr static auto BUFFER_SIZE =  2048;
    Stage _M_stage;
    config _M_config;
    std::shared_ptr<session_notification> _M_notify;
    std::unique_ptr<tcp_client> _M_tcp_client;
    char _M_buffer[BUFFER_SIZE] = {0x00};
    std::size_t _M_bufferLength;
  };
};

/*
namespace b3::entrypoint {

class session {
public:
  struct address {
    std::string ip;
    short port;
  };

  struct auth {
    constexpr static const auto negotiate_json =
        R"({{ "auth_type" : "{}",
            "username": "{}",
            "access_key":"{}"}})";

    std::string type;
    std::string username;
    std::string access_key;

    std::string get_json() {

	    return std::vformat(negotiate_json, std::make_format_args(type.c_str(), 
				    username.c_str(), access_key.c_str()));
    }
  };
  struct config {
    address addr;
    auth cred;
  };

session(config& __config) {}

};
}; // namespace b3::entrypoint

namespace session {
enum class Stage { Initialization, Binding, Transferring, Unbinding };

struct Sequecer {
  uint32_t inbound = 0x01;
  uint32_t outbound = 0x01;
};

class session_manager
{

};

class connection {
public:
  connection() = default;

  bool connect() { return false; }

private:
  constexpr static const auto negotiate_json =
      R"({ "auth_type" : "%s",
                     "username": "%s",
                     "access_key":"%s"})";

  void __build_negotiate() {
    using namespace b3::entrypoint::fixp::sbe;
    auto header = MessageHeader(_buffer, _bf_size, 0);
    auto msg = Negotiate(_buffer, MessageHeader::encodedLength(), _bf_size,
                         header.blockLength(), header.actingVersion());
    char buffer[strlen(negotiate_json) + 1];
    msg.putCredentials(std::string_view(buffer));
    _bf_size = msg.encodedLength();
  }

  void send() {
    // socket.send_async(_buffer, size);
  }
  void received(char *__buffer, size_t __len) {
    // process logica
  }
  void negotiate_send() {}
  void negotiate_response() { _stage = Stage::Binding; }

  void send_estabilish() {}

  void estabilish_response() {}

  void send_heartbeat() {}

  Sequecer _sequencer = {.inbound = 0x01, .outbound = 0x01};
  Stage _stage = {Stage::Initialization};
  size_t _bf_size = 0x00;
  char _buffer[2048] = {0x00};
};

};     // namespace session
*/
#endif // ENTRYPOINT_SESSION_HPP
