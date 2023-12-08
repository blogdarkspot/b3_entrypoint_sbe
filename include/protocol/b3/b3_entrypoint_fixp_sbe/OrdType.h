/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ORDTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ORDTYPE_CXX_H_

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

class OrdType
{
public:
    enum Value
    {
        MARKET = static_cast<char>(49),
        LIMIT = static_cast<char>(50),
        STOP_LOSS = static_cast<char>(51),
        STOP_LIMIT = static_cast<char>(52),
        MARKET_WITH_LEFTOVER_AS_LIMIT = static_cast<char>(75),
        RLP = static_cast<char>(87),
        PEGGED_MIDPOINT = static_cast<char>(80),
        NULL_VALUE = static_cast<char>(0)
    };

    static OrdType::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(49): return MARKET;
            case static_cast<char>(50): return LIMIT;
            case static_cast<char>(51): return STOP_LOSS;
            case static_cast<char>(52): return STOP_LIMIT;
            case static_cast<char>(75): return MARKET_WITH_LEFTOVER_AS_LIMIT;
            case static_cast<char>(87): return RLP;
            case static_cast<char>(80): return PEGGED_MIDPOINT;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum OrdType [E103]");
    }

    static const char *c_str(const OrdType::Value value)
    {
        switch (value)
        {
            case MARKET: return "MARKET";
            case LIMIT: return "LIMIT";
            case STOP_LOSS: return "STOP_LOSS";
            case STOP_LIMIT: return "STOP_LIMIT";
            case MARKET_WITH_LEFTOVER_AS_LIMIT: return "MARKET_WITH_LEFTOVER_AS_LIMIT";
            case RLP: return "RLP";
            case PEGGED_MIDPOINT: return "PEGGED_MIDPOINT";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum OrdType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, OrdType::Value m)
    {
        return os << OrdType::c_str(m);
    }
};

}
}
}
}

#endif
