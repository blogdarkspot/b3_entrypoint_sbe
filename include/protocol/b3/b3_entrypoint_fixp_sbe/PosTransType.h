/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_POSTRANSTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_POSTRANSTYPE_CXX_H_

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

class PosTransType
{
public:
    enum Value
    {
        EXERCISE = static_cast<std::uint8_t>(1),
        AUTOMATIC_EXERCISE = static_cast<std::uint8_t>(105),
        EXERCISE_NOT_AUTOMATIC = static_cast<std::uint8_t>(106),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static PosTransType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(1): return EXERCISE;
            case static_cast<std::uint8_t>(105): return AUTOMATIC_EXERCISE;
            case static_cast<std::uint8_t>(106): return EXERCISE_NOT_AUTOMATIC;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum PosTransType [E103]");
    }

    static const char *c_str(const PosTransType::Value value)
    {
        switch (value)
        {
            case EXERCISE: return "EXERCISE";
            case AUTOMATIC_EXERCISE: return "AUTOMATIC_EXERCISE";
            case EXERCISE_NOT_AUTOMATIC: return "EXERCISE_NOT_AUTOMATIC";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum PosTransType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, PosTransType::Value m)
    {
        return os << PosTransType::c_str(m);
    }
};

}
}
}
}

#endif
