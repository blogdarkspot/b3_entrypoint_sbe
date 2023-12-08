/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_SIMPLETIMEINFORCE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_SIMPLETIMEINFORCE_CXX_H_

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

class SimpleTimeInForce
{
public:
    enum Value
    {
        DAY = static_cast<char>(48),
        IMMEDIATE_OR_CANCEL = static_cast<char>(51),
        FILL_OR_KILL = static_cast<char>(52),
        NULL_VALUE = static_cast<char>(0)
    };

    static SimpleTimeInForce::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(48): return DAY;
            case static_cast<char>(51): return IMMEDIATE_OR_CANCEL;
            case static_cast<char>(52): return FILL_OR_KILL;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum SimpleTimeInForce [E103]");
    }

    static const char *c_str(const SimpleTimeInForce::Value value)
    {
        switch (value)
        {
            case DAY: return "DAY";
            case IMMEDIATE_OR_CANCEL: return "IMMEDIATE_OR_CANCEL";
            case FILL_OR_KILL: return "FILL_OR_KILL";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum SimpleTimeInForce [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, SimpleTimeInForce::Value m)
    {
        return os << SimpleTimeInForce::c_str(m);
    }
};

}
}
}
}

#endif
