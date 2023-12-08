/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_QUOTESTATUSRESPONSETO_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_QUOTESTATUSRESPONSETO_CXX_H_

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

class QuoteStatusResponseTo
{
public:
    enum Value
    {
        QUOTE = static_cast<char>(48),
        QUOTE_REQUEST = static_cast<char>(49),
        QUOTE_CANCEL = static_cast<char>(50),
        QUOTE_REQUEST_REJECT = static_cast<char>(51),
        NULL_VALUE = static_cast<char>(0)
    };

    static QuoteStatusResponseTo::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(48): return QUOTE;
            case static_cast<char>(49): return QUOTE_REQUEST;
            case static_cast<char>(50): return QUOTE_CANCEL;
            case static_cast<char>(51): return QUOTE_REQUEST_REJECT;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum QuoteStatusResponseTo [E103]");
    }

    static const char *c_str(const QuoteStatusResponseTo::Value value)
    {
        switch (value)
        {
            case QUOTE: return "QUOTE";
            case QUOTE_REQUEST: return "QUOTE_REQUEST";
            case QUOTE_CANCEL: return "QUOTE_CANCEL";
            case QUOTE_REQUEST_REJECT: return "QUOTE_REQUEST_REJECT";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum QuoteStatusResponseTo [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, QuoteStatusResponseTo::Value m)
    {
        return os << QuoteStatusResponseTo::c_str(m);
    }
};

}
}
}
}

#endif
