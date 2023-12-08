/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_EXECRESTATEMENTREASONVALIDFORMASSCANCEL_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_EXECRESTATEMENTREASONVALIDFORMASSCANCEL_CXX_H_

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

class ExecRestatementReasonValidForMassCancel
{
public:
    enum Value
    {
        ORDER_MASS_ACTION_FROM_CLIENT_REQUEST = static_cast<std::uint8_t>(202),
        MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST = static_cast<std::uint8_t>(207),
        NULL_VALUE = static_cast<std::uint8_t>(0)
    };

    static ExecRestatementReasonValidForMassCancel::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(202): return ORDER_MASS_ACTION_FROM_CLIENT_REQUEST;
            case static_cast<std::uint8_t>(207): return MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST;
            case static_cast<std::uint8_t>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum ExecRestatementReasonValidForMassCancel [E103]");
    }

    static const char *c_str(const ExecRestatementReasonValidForMassCancel::Value value)
    {
        switch (value)
        {
            case ORDER_MASS_ACTION_FROM_CLIENT_REQUEST: return "ORDER_MASS_ACTION_FROM_CLIENT_REQUEST";
            case MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST: return "MASS_CANCEL_ORDER_DUE_TO_OPERATIONAL_ERROR_REQUEST";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum ExecRestatementReasonValidForMassCancel [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, ExecRestatementReasonValidForMassCancel::Value m)
    {
        return os << ExecRestatementReasonValidForMassCancel::c_str(m);
    }
};

}
}
}
}

#endif
