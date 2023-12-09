cmake_minimum_required(VERSION 3.20)

add_executable(message_tests message_tests.cpp)
target_link_libraries(message_tests PRIVATE 
					Catch2::Catch2WithMain
					${CMAKE_PROJECT_NAME})

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../submodules/Catch2/extras/")

include(CTest)
include(Catch)

catch_discover_tests(message_tests
			REPORTER JUnit::out=result_junit.xml)
