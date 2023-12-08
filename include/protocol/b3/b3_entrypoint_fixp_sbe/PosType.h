/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_POSTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_POSTYPE_CXX_H_

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

class PosType
{
public:
    enum Value
    {
        TRANSACTION_QUANTITY = static_cast<char>(84),
        START_OF_DAY_QTY = static_cast<char>(83),
        OPTION_EXERCISE_QTY = static_cast<char>(69),
        BLOCKED_QTY = static_cast<char>(66),
        UNCOVERED_QTY = static_cast<char>(85),
        COVERED_QTY = static_cast<char>(67),
        NULL_VALUE = static_cast<char>(0)
    };

    static PosType::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(84): return TRANSACTION_QUANTITY;
            case static_cast<char>(83): return START_OF_DAY_QTY;
            case static_cast<char>(69): return OPTION_EXERCISE_QTY;
            case static_cast<char>(66): return BLOCKED_QTY;
            case static_cast<char>(85): return UNCOVERED_QTY;
            case static_cast<char>(67): return COVERED_QTY;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum PosType [E103]");
    }

    static const char *c_str(const PosType::Value value)
    {
        switch (value)
        {
            case TRANSACTION_QUANTITY: return "TRANSACTION_QUANTITY";
            case START_OF_DAY_QTY: return "START_OF_DAY_QTY";
            case OPTION_EXERCISE_QTY: return "OPTION_EXERCISE_QTY";
            case BLOCKED_QTY: return "BLOCKED_QTY";
            case UNCOVERED_QTY: return "UNCOVERED_QTY";
            case COVERED_QTY: return "COVERED_QTY";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum PosType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, PosType::Value m)
    {
        return os << PosType::c_str(m);
    }
};

}
}
}
}

#endif
