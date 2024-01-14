cmake_minimum_required(VERSION 3.20)

add_executable(unit_tests message_log_tests.cpp
							message_tests.cpp)
target_link_libraries(unit_tests PRIVATE 
					Catch2::Catch2WithMain
					${CMAKE_PROJECT_NAME})

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../submodules/Catch2/extras/")

include(CTest)
include(Catch)

catch_discover_tests(unit_tests
			REPORTER JUnit::out=result_junit.xml)
