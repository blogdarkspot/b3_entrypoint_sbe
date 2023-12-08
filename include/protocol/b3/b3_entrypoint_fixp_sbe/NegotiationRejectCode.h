/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_NEGOTIATIONREJECTCODE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_NEGOTIATIONREJECTCODE_CXX_H_

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

class NegotiationRejectCode
{
public:
    enum Value
    {
        UNSPECIFIED = static_cast<std::uint8_t>(0),
        CREDENTIALS = static_cast<std::uint8_t>(1),
        FLOWTYPE_NOT_SUPPORTED = static_cast<std::uint8_t>(2),
        ALREADY_NEGOTIATED = static_cast<std::uint8_t>(3),
        SESSION_BLOCKED = static_cast<std::uint8_t>(4),
        INVALID_SESSIONID = static_cast<std::uint8_t>(5),
        INVALID_SESSIONVERID = static_cast<std::uint8_t>(6),
        INVALID_TIMESTAMP = static_cast<std::uint8_t>(7),
        INVALID_FIRM = static_cast<std::uint8_t>(8),
        NEGOTIATE_NOT_ALLOWED = static_cast<std::uint8_t>(20),
        DUPLICATE_SESSION_CONNECTION = static_cast<std::uint8_t>(21),
        AUTHENTICATION_IN_PROGRESS = static_cast<std::uint8_t>(22),
        PROTOCOL_VERSION_NOT_SUPPORTED = static_cast<std::uint8_t>(23),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static NegotiationRejectCode::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return UNSPECIFIED;
            case static_cast<std::uint8_t>(1): return CREDENTIALS;
            case static_cast<std::uint8_t>(2): return FLOWTYPE_NOT_SUPPORTED;
            case static_cast<std::uint8_t>(3): return ALREADY_NEGOTIATED;
            case static_cast<std::uint8_t>(4): return SESSION_BLOCKED;
            case static_cast<std::uint8_t>(5): return INVALID_SESSIONID;
            case static_cast<std::uint8_t>(6): return INVALID_SESSIONVERID;
            case static_cast<std::uint8_t>(7): return INVALID_TIMESTAMP;
            case static_cast<std::uint8_t>(8): return INVALID_FIRM;
            case static_cast<std::uint8_t>(20): return NEGOTIATE_NOT_ALLOWED;
            case static_cast<std::uint8_t>(21): return DUPLICATE_SESSION_CONNECTION;
            case static_cast<std::uint8_t>(22): return AUTHENTICATION_IN_PROGRESS;
            case static_cast<std::uint8_t>(23): return PROTOCOL_VERSION_NOT_SUPPORTED;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum NegotiationRejectCode [E103]");
    }

    static const char *c_str(const NegotiationRejectCode::Value value)
    {
        switch (value)
        {
            case UNSPECIFIED: return "UNSPECIFIED";
            case CREDENTIALS: return "CREDENTIALS";
            case FLOWTYPE_NOT_SUPPORTED: return "FLOWTYPE_NOT_SUPPORTED";
            case ALREADY_NEGOTIATED: return "ALREADY_NEGOTIATED";
            case SESSION_BLOCKED: return "SESSION_BLOCKED";
            case INVALID_SESSIONID: return "INVALID_SESSIONID";
            case INVALID_SESSIONVERID: return "INVALID_SESSIONVERID";
            case INVALID_TIMESTAMP: return "INVALID_TIMESTAMP";
            case INVALID_FIRM: return "INVALID_FIRM";
            case NEGOTIATE_NOT_ALLOWED: return "NEGOTIATE_NOT_ALLOWED";
            case DUPLICATE_SESSION_CONNECTION: return "DUPLICATE_SESSION_CONNECTION";
            case AUTHENTICATION_IN_PROGRESS: return "AUTHENTICATION_IN_PROGRESS";
            case PROTOCOL_VERSION_NOT_SUPPORTED: return "PROTOCOL_VERSION_NOT_SUPPORTED";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum NegotiationRejectCode [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, NegotiationRejectCode::Value m)
    {
        return os << NegotiationRejectCode::c_str(m);
    }
};

}
}
}
}

#endif
