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
#endif // ENTRYPOINT_SESSION_HPP
