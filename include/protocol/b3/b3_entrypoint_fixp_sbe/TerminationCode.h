/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_TERMINATIONCODE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_TERMINATIONCODE_CXX_H_

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

class TerminationCode
{
public:
    enum Value
    {
        UNSPECIFIED = static_cast<std::uint8_t>(0),
        FINISHED = static_cast<std::uint8_t>(1),
        UNNEGOTIATED = static_cast<std::uint8_t>(2),
        NOT_ESTABLISHED = static_cast<std::uint8_t>(3),
        SESSION_BLOCKED = static_cast<std::uint8_t>(4),
        NEGOTIATION_IN_PROGRESS = static_cast<std::uint8_t>(5),
        ESTABLISH_IN_PROGRESS = static_cast<std::uint8_t>(6),
        KEEPALIVE_INTERVAL_LAPSED = static_cast<std::uint8_t>(10),
        INVALID_SESSIONID = static_cast<std::uint8_t>(11),
        INVALID_SESSIONVERID = static_cast<std::uint8_t>(12),
        INVALID_TIMESTAMP = static_cast<std::uint8_t>(13),
        INVALID_NEXTSEQNO = static_cast<std::uint8_t>(14),
        UNRECOGNIZED_MESSAGE = static_cast<std::uint8_t>(15),
        INVALID_SOFH = static_cast<std::uint8_t>(16),
        DECODING_ERROR = static_cast<std::uint8_t>(17),
        TERMINATE_NOT_ALLOWED = static_cast<std::uint8_t>(20),
        TERMINATE_IN_PROGRESS = static_cast<std::uint8_t>(21),
        PROTOCOL_VERSION_NOT_SUPPORTED = static_cast<std::uint8_t>(23),
        BACKUP_TAKEOVER_IN_PROGRESS = static_cast<std::uint8_t>(30),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static TerminationCode::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return UNSPECIFIED;
            case static_cast<std::uint8_t>(1): return FINISHED;
            case static_cast<std::uint8_t>(2): return UNNEGOTIATED;
            case static_cast<std::uint8_t>(3): return NOT_ESTABLISHED;
            case static_cast<std::uint8_t>(4): return SESSION_BLOCKED;
            case static_cast<std::uint8_t>(5): return NEGOTIATION_IN_PROGRESS;
            case static_cast<std::uint8_t>(6): return ESTABLISH_IN_PROGRESS;
            case static_cast<std::uint8_t>(10): return KEEPALIVE_INTERVAL_LAPSED;
            case static_cast<std::uint8_t>(11): return INVALID_SESSIONID;
            case static_cast<std::uint8_t>(12): return INVALID_SESSIONVERID;
            case static_cast<std::uint8_t>(13): return INVALID_TIMESTAMP;
            case static_cast<std::uint8_t>(14): return INVALID_NEXTSEQNO;
            case static_cast<std::uint8_t>(15): return UNRECOGNIZED_MESSAGE;
            case static_cast<std::uint8_t>(16): return INVALID_SOFH;
            case static_cast<std::uint8_t>(17): return DECODING_ERROR;
            case static_cast<std::uint8_t>(20): return TERMINATE_NOT_ALLOWED;
            case static_cast<std::uint8_t>(21): return TERMINATE_IN_PROGRESS;
            case static_cast<std::uint8_t>(23): return PROTOCOL_VERSION_NOT_SUPPORTED;
            case static_cast<std::uint8_t>(30): return BACKUP_TAKEOVER_IN_PROGRESS;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum TerminationCode [E103]");
    }

    static const char *c_str(const TerminationCode::Value value)
    {
        switch (value)
        {
            case UNSPECIFIED: return "UNSPECIFIED";
            case FINISHED: return "FINISHED";
            case UNNEGOTIATED: return "UNNEGOTIATED";
            case NOT_ESTABLISHED: return "NOT_ESTABLISHED";
            case SESSION_BLOCKED: return "SESSION_BLOCKED";
            case NEGOTIATION_IN_PROGRESS: return "NEGOTIATION_IN_PROGRESS";
            case ESTABLISH_IN_PROGRESS: return "ESTABLISH_IN_PROGRESS";
            case KEEPALIVE_INTERVAL_LAPSED: return "KEEPALIVE_INTERVAL_LAPSED";
            case INVALID_SESSIONID: return "INVALID_SESSIONID";
            case INVALID_SESSIONVERID: return "INVALID_SESSIONVERID";
            case INVALID_TIMESTAMP: return "INVALID_TIMESTAMP";
            case INVALID_NEXTSEQNO: return "INVALID_NEXTSEQNO";
            case UNRECOGNIZED_MESSAGE: return "UNRECOGNIZED_MESSAGE";
            case INVALID_SOFH: return "INVALID_SOFH";
            case DECODING_ERROR: return "DECODING_ERROR";
            case TERMINATE_NOT_ALLOWED: return "TERMINATE_NOT_ALLOWED";
            case TERMINATE_IN_PROGRESS: return "TERMINATE_IN_PROGRESS";
            case PROTOCOL_VERSION_NOT_SUPPORTED: return "PROTOCOL_VERSION_NOT_SUPPORTED";
            case BACKUP_TAKEOVER_IN_PROGRESS: return "BACKUP_TAKEOVER_IN_PROGRESS";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum TerminationCode [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, TerminationCode::Value m)
    {
        return os << TerminationCode::c_str(m);
    }
};

}
}
}
}

#endif
