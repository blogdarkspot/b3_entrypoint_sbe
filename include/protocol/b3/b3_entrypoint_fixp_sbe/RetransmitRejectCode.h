/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_RETRANSMITREJECTCODE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_RETRANSMITREJECTCODE_CXX_H_

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

class RetransmitRejectCode
{
public:
    enum Value
    {
        OUT_OF_RANGE = static_cast<std::uint8_t>(0),
        INVALID_SESSION = static_cast<std::uint8_t>(1),
        REQUEST_LIMIT_EXCEEDED = static_cast<std::uint8_t>(2),
        RETRANSMIT_IN_PROGRESS = static_cast<std::uint8_t>(3),
        INVALID_TIMESTAMP = static_cast<std::uint8_t>(4),
        INVALID_FROMSEQNO = static_cast<std::uint8_t>(5),
        INVALID_COUNT = static_cast<std::uint8_t>(9),
        THROTTLE_REJECT = static_cast<std::uint8_t>(10),
        SYSTEM_BUSY = static_cast<std::uint8_t>(11),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static RetransmitRejectCode::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return OUT_OF_RANGE;
            case static_cast<std::uint8_t>(1): return INVALID_SESSION;
            case static_cast<std::uint8_t>(2): return REQUEST_LIMIT_EXCEEDED;
            case static_cast<std::uint8_t>(3): return RETRANSMIT_IN_PROGRESS;
            case static_cast<std::uint8_t>(4): return INVALID_TIMESTAMP;
            case static_cast<std::uint8_t>(5): return INVALID_FROMSEQNO;
            case static_cast<std::uint8_t>(9): return INVALID_COUNT;
            case static_cast<std::uint8_t>(10): return THROTTLE_REJECT;
            case static_cast<std::uint8_t>(11): return SYSTEM_BUSY;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum RetransmitRejectCode [E103]");
    }

    static const char *c_str(const RetransmitRejectCode::Value value)
    {
        switch (value)
        {
            case OUT_OF_RANGE: return "OUT_OF_RANGE";
            case INVALID_SESSION: return "INVALID_SESSION";
            case REQUEST_LIMIT_EXCEEDED: return "REQUEST_LIMIT_EXCEEDED";
            case RETRANSMIT_IN_PROGRESS: return "RETRANSMIT_IN_PROGRESS";
            case INVALID_TIMESTAMP: return "INVALID_TIMESTAMP";
            case INVALID_FROMSEQNO: return "INVALID_FROMSEQNO";
            case INVALID_COUNT: return "INVALID_COUNT";
            case THROTTLE_REJECT: return "THROTTLE_REJECT";
            case SYSTEM_BUSY: return "SYSTEM_BUSY";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum RetransmitRejectCode [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, RetransmitRejectCode::Value m)
    {
        return os << RetransmitRejectCode::c_str(m);
    }
};

}
}
}
}

#endif
