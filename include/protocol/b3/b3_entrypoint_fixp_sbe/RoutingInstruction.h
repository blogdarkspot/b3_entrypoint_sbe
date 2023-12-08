/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ROUTINGINSTRUCTION_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ROUTINGINSTRUCTION_CXX_H_

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

class RoutingInstruction
{
public:
    enum Value
    {
        RETAIL_LIQUIDITY_TAKER = static_cast<std::uint8_t>(1),
        WAIVED_PRIORITY = static_cast<std::uint8_t>(2),
        BROKER_ONLY = static_cast<std::uint8_t>(3),
        BROKER_ONLY_REMOVAL = static_cast<std::uint8_t>(4),
        NULL_VALUE = static_cast<std::uint8_t>(0)
    };

    static RoutingInstruction::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(1): return RETAIL_LIQUIDITY_TAKER;
            case static_cast<std::uint8_t>(2): return WAIVED_PRIORITY;
            case static_cast<std::uint8_t>(3): return BROKER_ONLY;
            case static_cast<std::uint8_t>(4): return BROKER_ONLY_REMOVAL;
            case static_cast<std::uint8_t>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum RoutingInstruction [E103]");
    }

    static const char *c_str(const RoutingInstruction::Value value)
    {
        switch (value)
        {
            case RETAIL_LIQUIDITY_TAKER: return "RETAIL_LIQUIDITY_TAKER";
            case WAIVED_PRIORITY: return "WAIVED_PRIORITY";
            case BROKER_ONLY: return "BROKER_ONLY";
            case BROKER_ONLY_REMOVAL: return "BROKER_ONLY_REMOVAL";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum RoutingInstruction [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, RoutingInstruction::Value m)
    {
        return os << RoutingInstruction::c_str(m);
    }
};

}
}
}
}

#endif
