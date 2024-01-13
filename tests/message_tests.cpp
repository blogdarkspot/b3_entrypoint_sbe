#include "catch2/catch_test_macros.hpp"
#include "protocol/b3/sbe_message.hpp"
#include "protocol/b3/b3_entrypoint_fixp_sbe/ExecutionReport_New.h"
#include "protocol/b3/session.hpp" 
#include <iostream>

using namespace b3::entrypoint::fixp;

TEST_CASE("Create Administrative Messages", "[SBE Messages]") {
  constexpr int size = 2048;
  char buffer[size];

  auto v = b3::protocol::sbe_message(buffer, 0, size);
   v.build<sbe::ExecutionReport_New>();
  //auto body = v.body();

	auto session = b3::entrypoint::session::auth();

	session.type = "type";
	session.username = "user_name";
	session.access_key = "access_key";
	std::cout << session.get_json();
}
