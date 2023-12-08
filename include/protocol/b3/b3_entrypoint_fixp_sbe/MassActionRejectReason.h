/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_MASSACTIONREJECTREASON_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_MASSACTIONREJECTREASON_CXX_H_

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

class MassActionRejectReason
{
public:
    enum Value
    {
        MASS_ACTION_NOT_SUPPORTED = static_cast<std::uint8_t>(0),
        INVALID_OR_UNKNOWN_MARKET_SEGMENT = static_cast<std::uint8_t>(8),
        OTHER = static_cast<std::uint8_t>(99),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static MassActionRejectReason::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return MASS_ACTION_NOT_SUPPORTED;
            case static_cast<std::uint8_t>(8): return INVALID_OR_UNKNOWN_MARKET_SEGMENT;
            case static_cast<std::uint8_t>(99): return OTHER;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum MassActionRejectReason [E103]");
    }

    static const char *c_str(const MassActionRejectReason::Value value)
    {
        switch (value)
        {
            case MASS_ACTION_NOT_SUPPORTED: return "MASS_ACTION_NOT_SUPPORTED";
            case INVALID_OR_UNKNOWN_MARKET_SEGMENT: return "INVALID_OR_UNKNOWN_MARKET_SEGMENT";
            case OTHER: return "OTHER";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum MassActionRejectReason [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, MassActionRejectReason::Value m)
    {
        return os << MassActionRejectReason::c_str(m);
    }
};

}
}
}
}

#endif
