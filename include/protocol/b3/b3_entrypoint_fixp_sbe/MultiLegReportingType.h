/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_MULTILEGREPORTINGTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_MULTILEGREPORTINGTYPE_CXX_H_

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

class MultiLegReportingType
{
public:
    enum Value
    {
        SINGLE_SECURITY = static_cast<char>(49),
        INDIVIDUALLEG_OF_MULTILEG_SECURITY = static_cast<char>(50),
        MULTILEG_SECURITY = static_cast<char>(51),
        NULL_VALUE = static_cast<char>(0)
    };

    static MultiLegReportingType::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(49): return SINGLE_SECURITY;
            case static_cast<char>(50): return INDIVIDUALLEG_OF_MULTILEG_SECURITY;
            case static_cast<char>(51): return MULTILEG_SECURITY;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum MultiLegReportingType [E103]");
    }

    static const char *c_str(const MultiLegReportingType::Value value)
    {
        switch (value)
        {
            case SINGLE_SECURITY: return "SINGLE_SECURITY";
            case INDIVIDUALLEG_OF_MULTILEG_SECURITY: return "INDIVIDUALLEG_OF_MULTILEG_SECURITY";
            case MULTILEG_SECURITY: return "MULTILEG_SECURITY";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum MultiLegReportingType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, MultiLegReportingType::Value m)
    {
        return os << MultiLegReportingType::c_str(m);
    }
};

}
}
}
}

#endif
