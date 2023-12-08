/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_FLOWTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_FLOWTYPE_CXX_H_

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

class FlowType
{
public:
    enum Value
    {
        NONE = static_cast<std::uint8_t>(0),
        RECOVERABLE = static_cast<std::uint8_t>(1),
        UNSEQUENCED = static_cast<std::uint8_t>(2),
        IDEMPOTENT = static_cast<std::uint8_t>(3),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static FlowType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return NONE;
            case static_cast<std::uint8_t>(1): return RECOVERABLE;
            case static_cast<std::uint8_t>(2): return UNSEQUENCED;
            case static_cast<std::uint8_t>(3): return IDEMPOTENT;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum FlowType [E103]");
    }

    static const char *c_str(const FlowType::Value value)
    {
        switch (value)
        {
            case NONE: return "NONE";
            case RECOVERABLE: return "RECOVERABLE";
            case UNSEQUENCED: return "UNSEQUENCED";
            case IDEMPOTENT: return "IDEMPOTENT";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum FlowType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, FlowType::Value m)
    {
        return os << FlowType::c_str(m);
    }
};

}
}
}
}

#endif
