cmake_minimum_required(VERSION 3.10)

project(EntryPoint VERSION 1.0.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${CMAKE_PROJECT_NAME} INTERFACE
        include/protocol/b3/session.hpp
        main.cpp)

target_include_directories(${CMAKE_PROJECT_NAME} INTERFACE
				${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(submodules/Catch2)
add_subdirectory(tests)
