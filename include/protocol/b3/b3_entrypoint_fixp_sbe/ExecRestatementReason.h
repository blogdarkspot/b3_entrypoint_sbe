/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_EXECRESTATEMENTREASON_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_EXECRESTATEMENTREASON_CXX_H_

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

class ExecRestatementReason
{
public:
    enum Value
    {
        MARKET_OPTION = static_cast<std::uint8_t>(8),
        CANCEL_ON_HARD_DISCONNECTION = static_cast<std::uint8_t>(100),
        CANCEL_ON_TERMINATE = static_cast<std::uint8_t>(101),
        CANCEL_ON_DISCONNECT_AND_TERMINATE = static_cast<std::uint8_t>(102),
        SELF_TRADING_PREVENTION = static_cast<std::uint8_t>(103),
        CANCEL_FROM_FIRMSOFT = static_cast<std::uint8_t>(105),
        CANCEL_RESTING_ORDER_ON_SELF_TRADE = static_cast<std::uint8_t>(107),
        MARKET_MAKER_PROTECTION = static_cast<std::uint8_t>(200),
        RISK_MANAGEMENT_CANCELLATION = static_cast<std::uint8_t>(201),
        ORDER_MASS_ACTION_FROM_CLIENT_REQUEST = static_cast<std::uint8_t>(202),
        CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR = static_cast<std::uint8_t>(203),
        ORDER_CANCELLED_DUE_TO_OPERATIONAL_ERROR = static_cast<std::uint8_t>(204),
        CANCEL_ORDER_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR = static_cast<std::uint8_t>(205),
        ORDER_CANCELLED_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR = static_cast<std::uint8_t>(206),
        MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST = static_cast<std::uint8_t>(207),
        MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_EFFECTIVE = static_cast<std::uint8_t>(208),
        CANCEL_ON_MIDPOINT_BROKER_ONLY_REMOVAL = static_cast<std::uint8_t>(209),
        NULL_VALUE = static_cast<std::uint8_t>(0)
    };

    static ExecRestatementReason::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(8): return MARKET_OPTION;
            case static_cast<std::uint8_t>(100): return CANCEL_ON_HARD_DISCONNECTION;
            case static_cast<std::uint8_t>(101): return CANCEL_ON_TERMINATE;
            case static_cast<std::uint8_t>(102): return CANCEL_ON_DISCONNECT_AND_TERMINATE;
            case static_cast<std::uint8_t>(103): return SELF_TRADING_PREVENTION;
            case static_cast<std::uint8_t>(105): return CANCEL_FROM_FIRMSOFT;
            case static_cast<std::uint8_t>(107): return CANCEL_RESTING_ORDER_ON_SELF_TRADE;
            case static_cast<std::uint8_t>(200): return MARKET_MAKER_PROTECTION;
            case static_cast<std::uint8_t>(201): return RISK_MANAGEMENT_CANCELLATION;
            case static_cast<std::uint8_t>(202): return ORDER_MASS_ACTION_FROM_CLIENT_REQUEST;
            case static_cast<std::uint8_t>(203): return CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR;
            case static_cast<std::uint8_t>(204): return ORDER_CANCELLED_DUE_TO_OPERATIONAL_ERROR;
            case static_cast<std::uint8_t>(205): return CANCEL_ORDER_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR;
            case static_cast<std::uint8_t>(206): return ORDER_CANCELLED_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR;
            case static_cast<std::uint8_t>(207): return MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST;
            case static_cast<std::uint8_t>(208): return MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_EFFECTIVE;
            case static_cast<std::uint8_t>(209): return CANCEL_ON_MIDPOINT_BROKER_ONLY_REMOVAL;
            case static_cast<std::uint8_t>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum ExecRestatementReason [E103]");
    }

    static const char *c_str(const ExecRestatementReason::Value value)
    {
        switch (value)
        {
            case MARKET_OPTION: return "MARKET_OPTION";
            case CANCEL_ON_HARD_DISCONNECTION: return "CANCEL_ON_HARD_DISCONNECTION";
            case CANCEL_ON_TERMINATE: return "CANCEL_ON_TERMINATE";
            case CANCEL_ON_DISCONNECT_AND_TERMINATE: return "CANCEL_ON_DISCONNECT_AND_TERMINATE";
            case SELF_TRADING_PREVENTION: return "SELF_TRADING_PREVENTION";
            case CANCEL_FROM_FIRMSOFT: return "CANCEL_FROM_FIRMSOFT";
            case CANCEL_RESTING_ORDER_ON_SELF_TRADE: return "CANCEL_RESTING_ORDER_ON_SELF_TRADE";
            case MARKET_MAKER_PROTECTION: return "MARKET_MAKER_PROTECTION";
            case RISK_MANAGEMENT_CANCELLATION: return "RISK_MANAGEMENT_CANCELLATION";
            case ORDER_MASS_ACTION_FROM_CLIENT_REQUEST: return "ORDER_MASS_ACTION_FROM_CLIENT_REQUEST";
            case CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR: return "CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR";
            case ORDER_CANCELLED_DUE_TO_OPERATIONAL_ERROR: return "ORDER_CANCELLED_DUE_TO_OPERATIONAL_ERROR";
            case CANCEL_ORDER_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR: return "CANCEL_ORDER_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR";
            case ORDER_CANCELLED_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR: return "ORDER_CANCELLED_FIRMSOFT_DUE_TO_OPERATIONAL_ERROR";
            case MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST: return "MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST";
            case MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_EFFECTIVE: return "MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_EFFECTIVE";
            case CANCEL_ON_MIDPOINT_BROKER_ONLY_REMOVAL: return "CANCEL_ON_MIDPOINT_BROKER_ONLY_REMOVAL";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum ExecRestatementReason [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, ExecRestatementReason::Value m)
    {
        return os << ExecRestatementReason::c_str(m);
    }
};

}
}
}
}

#endif
