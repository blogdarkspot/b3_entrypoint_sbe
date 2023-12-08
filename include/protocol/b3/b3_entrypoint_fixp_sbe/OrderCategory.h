/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ORDERCATEGORY_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ORDERCATEGORY_CXX_H_

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

class OrderCategory
{
public:
    enum Value
    {
        RESULT_OF_OPTIONS_EXERCISE = static_cast<char>(66),
        RESULT_OF_ASSIGNMENT_FROM_AN_OPTIONS_EXERCISE = static_cast<char>(67),
        RESULT_OF_AUTOMATIC_OPTIONS_EXERCISE = static_cast<char>(68),
        RESULT_OF_MIDPOINT_ORDER = static_cast<char>(69),
        RESULT_OF_BLOCK_BOOK_TRADE = static_cast<char>(70),
        RESULT_OF_TRADE_AT_CLOSE = static_cast<char>(71),
        RESULT_OF_TRADE_AT_AVERAGE = static_cast<char>(72),
        NULL_VALUE = static_cast<char>(0)
    };

    static OrderCategory::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(66): return RESULT_OF_OPTIONS_EXERCISE;
            case static_cast<char>(67): return RESULT_OF_ASSIGNMENT_FROM_AN_OPTIONS_EXERCISE;
            case static_cast<char>(68): return RESULT_OF_AUTOMATIC_OPTIONS_EXERCISE;
            case static_cast<char>(69): return RESULT_OF_MIDPOINT_ORDER;
            case static_cast<char>(70): return RESULT_OF_BLOCK_BOOK_TRADE;
            case static_cast<char>(71): return RESULT_OF_TRADE_AT_CLOSE;
            case static_cast<char>(72): return RESULT_OF_TRADE_AT_AVERAGE;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum OrderCategory [E103]");
    }

    static const char *c_str(const OrderCategory::Value value)
    {
        switch (value)
        {
            case RESULT_OF_OPTIONS_EXERCISE: return "RESULT_OF_OPTIONS_EXERCISE";
            case RESULT_OF_ASSIGNMENT_FROM_AN_OPTIONS_EXERCISE: return "RESULT_OF_ASSIGNMENT_FROM_AN_OPTIONS_EXERCISE";
            case RESULT_OF_AUTOMATIC_OPTIONS_EXERCISE: return "RESULT_OF_AUTOMATIC_OPTIONS_EXERCISE";
            case RESULT_OF_MIDPOINT_ORDER: return "RESULT_OF_MIDPOINT_ORDER";
            case RESULT_OF_BLOCK_BOOK_TRADE: return "RESULT_OF_BLOCK_BOOK_TRADE";
            case RESULT_OF_TRADE_AT_CLOSE: return "RESULT_OF_TRADE_AT_CLOSE";
            case RESULT_OF_TRADE_AT_AVERAGE: return "RESULT_OF_TRADE_AT_AVERAGE";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum OrderCategory [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, OrderCategory::Value m)
    {
        return os << OrderCategory::c_str(m);
    }
};

}
}
}
}

#endif
