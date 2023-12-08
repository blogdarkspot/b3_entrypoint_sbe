/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_MASSACTIONTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_MASSACTIONTYPE_CXX_H_

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

class MassActionType
{
public:
    enum Value
    {
        RELEASE_ORDERS_FROM_SUSPENSION = static_cast<std::uint8_t>(2),
        CANCEL_ORDERS = static_cast<std::uint8_t>(3),
        CANCEL_AND_SUSPEND_ORDERS = static_cast<std::uint8_t>(4),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static MassActionType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(2): return RELEASE_ORDERS_FROM_SUSPENSION;
            case static_cast<std::uint8_t>(3): return CANCEL_ORDERS;
            case static_cast<std::uint8_t>(4): return CANCEL_AND_SUSPEND_ORDERS;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum MassActionType [E103]");
    }

    static const char *c_str(const MassActionType::Value value)
    {
        switch (value)
        {
            case RELEASE_ORDERS_FROM_SUSPENSION: return "RELEASE_ORDERS_FROM_SUSPENSION";
            case CANCEL_ORDERS: return "CANCEL_ORDERS";
            case CANCEL_AND_SUSPEND_ORDERS: return "CANCEL_AND_SUSPEND_ORDERS";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum MassActionType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, MassActionType::Value m)
    {
        return os << MassActionType::c_str(m);
    }
};

}
}
}
}

#endif
