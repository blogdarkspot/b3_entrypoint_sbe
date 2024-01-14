#include<string>
#include "catch2/catch_test_macros.hpp"
#include "catch2/benchmark/catch_benchmark.hpp"
#include "io/message_log.hpp"

TEST_CASE("Create Message Log",
          "[Message Log]")
{
    const std::string path = "./teste_1.log";
    auto wlog = io::message_log_write(path);
    BENCHMARK("Write Hello World") {
        wlog.write("hello world", strlen("hello world"));
    };
    
}