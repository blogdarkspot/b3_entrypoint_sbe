/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ORDSTATUS_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ORDSTATUS_CXX_H_

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

class OrdStatus
{
public:
    enum Value
    {
        NEW = static_cast<char>(48),
        PARTIALLY_FILLED = static_cast<char>(49),
        FILLED = static_cast<char>(50),
        CANCELED = static_cast<char>(52),
        REPLACED = static_cast<char>(53),
        REJECTED = static_cast<char>(56),
        EXPIRED = static_cast<char>(67),
        RESTATED = static_cast<char>(82),
        PREVIOUS_FINAL_STATE = static_cast<char>(90),
        NULL_VALUE = static_cast<char>(0)
    };

    static OrdStatus::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(48): return NEW;
            case static_cast<char>(49): return PARTIALLY_FILLED;
            case static_cast<char>(50): return FILLED;
            case static_cast<char>(52): return CANCELED;
            case static_cast<char>(53): return REPLACED;
            case static_cast<char>(56): return REJECTED;
            case static_cast<char>(67): return EXPIRED;
            case static_cast<char>(82): return RESTATED;
            case static_cast<char>(90): return PREVIOUS_FINAL_STATE;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum OrdStatus [E103]");
    }

    static const char *c_str(const OrdStatus::Value value)
    {
        switch (value)
        {
            case NEW: return "NEW";
            case PARTIALLY_FILLED: return "PARTIALLY_FILLED";
            case FILLED: return "FILLED";
            case CANCELED: return "CANCELED";
            case REPLACED: return "REPLACED";
            case REJECTED: return "REJECTED";
            case EXPIRED: return "EXPIRED";
            case RESTATED: return "RESTATED";
            case PREVIOUS_FINAL_STATE: return "PREVIOUS_FINAL_STATE";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum OrdStatus [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, OrdStatus::Value m)
    {
        return os << OrdStatus::c_str(m);
    }
};

}
}
}
}

#endif
