/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_QUOTESTATUS_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_QUOTESTATUS_CXX_H_

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

class QuoteStatus
{
public:
    enum Value
    {
        EXPIRED = static_cast<std::uint8_t>(7),
        ACCEPTED = static_cast<std::uint8_t>(0),
        REJECTED = static_cast<std::uint8_t>(5),
        QUOTE_NOT_FOUND = static_cast<std::uint8_t>(9),
        PENDING = static_cast<std::uint8_t>(10),
        PASS = static_cast<std::uint8_t>(11),
        CANCELED = static_cast<std::uint8_t>(17),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static QuoteStatus::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(7): return EXPIRED;
            case static_cast<std::uint8_t>(0): return ACCEPTED;
            case static_cast<std::uint8_t>(5): return REJECTED;
            case static_cast<std::uint8_t>(9): return QUOTE_NOT_FOUND;
            case static_cast<std::uint8_t>(10): return PENDING;
            case static_cast<std::uint8_t>(11): return PASS;
            case static_cast<std::uint8_t>(17): return CANCELED;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum QuoteStatus [E103]");
    }

    static const char *c_str(const QuoteStatus::Value value)
    {
        switch (value)
        {
            case EXPIRED: return "EXPIRED";
            case ACCEPTED: return "ACCEPTED";
            case REJECTED: return "REJECTED";
            case QUOTE_NOT_FOUND: return "QUOTE_NOT_FOUND";
            case PENDING: return "PENDING";
            case PASS: return "PASS";
            case CANCELED: return "CANCELED";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum QuoteStatus [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, QuoteStatus::Value m)
    {
        return os << QuoteStatus::c_str(m);
    }
};

}
}
}
}

#endif
