cmake_minimum_required(VERSION 3.10)

project(EntryPoint VERSION 1.0.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_library(${CMAKE_PROJECT_NAME} INTERFACE)
target_include_directories(${CMAKE_PROJECT_NAME} INTERFACE
				${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(${CMAKE_PROJECT_NAME} INTERFACE  cxx_std_20)

add_subdirectory(submodules/Catch2)
add_subdirectory(tests)
