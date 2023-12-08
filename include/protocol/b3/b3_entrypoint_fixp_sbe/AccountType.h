/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ACCOUNTTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ACCOUNTTYPE_CXX_H_

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

class AccountType
{
public:
    enum Value
    {
        REMOVE_ACCOUNT_INFORMATION = static_cast<std::uint8_t>(38),
        REGULAR_ACCOUNT = static_cast<std::uint8_t>(39),
        NULL_VALUE = static_cast<std::uint8_t>(0)
    };

    static AccountType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(38): return REMOVE_ACCOUNT_INFORMATION;
            case static_cast<std::uint8_t>(39): return REGULAR_ACCOUNT;
            case static_cast<std::uint8_t>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum AccountType [E103]");
    }

    static const char *c_str(const AccountType::Value value)
    {
        switch (value)
        {
            case REMOVE_ACCOUNT_INFORMATION: return "REMOVE_ACCOUNT_INFORMATION";
            case REGULAR_ACCOUNT: return "REGULAR_ACCOUNT";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum AccountType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, AccountType::Value m)
    {
        return os << AccountType::c_str(m);
    }
};

}
}
}
}

#endif
