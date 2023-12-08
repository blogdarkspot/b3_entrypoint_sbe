/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_QUOTECANCEL_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_QUOTECANCEL_CXX_H_

#if defined(SBE_HAVE_CMATH)
/* cmath needed for std::numeric_limits<double>::quiet_NaN() */
#  include <cmath>
#  define SBE_FLOAT_NAN std::numeric_limits<float>::quiet_NaN()
#  define SBE_DOUBLE_NAN std::numeric_limits<double>::quiet_NaN()
#else
/* math.h needed for NAN */
#  include <math.h>
#  define SBE_FLOAT_NAN NAN
#  define SBE_DOUBLE_NAN NAN
#endif

#if __cplusplus >= 201103L
#  define SBE_CONSTEXPR constexpr
#  define SBE_NOEXCEPT noexcept
#else
#  define SBE_CONSTEXPR
#  define SBE_NOEXCEPT
#endif

#if __cplusplus >= 201703L
#  include <string_view>
#  define SBE_NODISCARD [[nodiscard]]
#else
#  define SBE_NODISCARD
#endif

#if !defined(__STDC_LIMIT_MACROS)
#  define __STDC_LIMIT_MACROS 1
#endif

#include <cstdint>
#include <cstring>
#include <iomanip>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>

#if defined(WIN32) || defined(_WIN32)
#  define SBE_BIG_ENDIAN_ENCODE_16(v) _byteswap_ushort(v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) _byteswap_ulong(v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) _byteswap_uint64(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) (v)
#elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#  define SBE_BIG_ENDIAN_ENCODE_16(v) __builtin_bswap16(v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) __builtin_bswap32(v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) __builtin_bswap64(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) (v)
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) __builtin_bswap16(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) __builtin_bswap32(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) __builtin_bswap64(v)
#  define SBE_BIG_ENDIAN_ENCODE_16(v) (v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) (v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) (v)
#else
#  error "Byte Ordering of platform not determined. Set __BYTE_ORDER__ manually before including this file."
#endif

#if !defined(SBE_BOUNDS_CHECK_EXPECT)
#  if defined(SBE_NO_BOUNDS_CHECK)
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (false)
#  elif defined(_MSC_VER)
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (exp)
#  else 
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (__builtin_expect(exp, c))
#  endif

#endif

#define SBE_NULLVALUE_INT8 (std::numeric_limits<std::int8_t>::min)()
#define SBE_NULLVALUE_INT16 (std::numeric_limits<std::int16_t>::min)()
#define SBE_NULLVALUE_INT32 (std::numeric_limits<std::int32_t>::min)()
#define SBE_NULLVALUE_INT64 (std::numeric_limits<std::int64_t>::min)()
#define SBE_NULLVALUE_UINT8 (std::numeric_limits<std::uint8_t>::max)()
#define SBE_NULLVALUE_UINT16 (std::numeric_limits<std::uint16_t>::max)()
#define SBE_NULLVALUE_UINT32 (std::numeric_limits<std::uint32_t>::max)()
#define SBE_NULLVALUE_UINT64 (std::numeric_limits<std::uint64_t>::max)()


#include "RatioQty.h"
#include "ExecRestatementReasonValidForSingleCancel.h"
#include "NegotiationRejectCode.h"
#include "TextEncoding.h"
#include "RoutingInstruction.h"
#include "DeltaInMillis.h"
#include "OrdStatus.h"
#include "TimeInForce.h"
#include "ExecType.h"
#include "Boolean.h"
#include "FramingHeader.h"
#include "MassActionRejectReason.h"
#include "MessageType.h"
#include "InvestorID.h"
#include "TerminationCode.h"
#include "MassActionResponse.h"
#include "OrdType.h"
#include "SecurityIDSource.h"
#include "InboundBusinessHeader.h"
#include "SecurityResponseType.h"
#include "AllocTransType.h"
#include "AllocStatus.h"
#include "CredentialsEncoding.h"
#include "CxlRejResponseTo.h"
#include "CrossedIndicator.h"
#include "Price.h"
#include "PercentageOptional.h"
#include "QuoteReqID.h"
#include "MemoEncoding.h"
#include "PriceOffsetOptional.h"
#include "PosMaintStatus.h"
#include "PossResend.h"
#include "SelfTradePreventionInstruction.h"
#include "SimpleTimeInForce.h"
#include "RetransmitRejectCode.h"
#include "SimpleOrdType.h"
#include "QuoteStatus.h"
#include "BidirectionalBusinessHeader.h"
#include "PriceOptional.h"
#include "Side.h"
#include "GroupSizeEncoding.h"
#include "UTCTimestampNanosOptional.h"
#include "SendingTime.h"
#include "ExecuteUnderlyingTrade.h"
#include "QuoteStatusResponseTo.h"
#include "PosType.h"
#include "CustodianInfo.h"
#include "MassActionScope.h"
#include "AllocNoOrdersType.h"
#include "MassActionType.h"
#include "PosMaintAction.h"
#include "MessageHeader.h"
#include "EstablishRejectCode.h"
#include "Percentage.h"
#include "QuoteCancelType.h"
#include "AllocType.h"
#include "ExecRestatementReasonValidForMassCancel.h"
#include "AccountType.h"
#include "UTCTimestampNanos.h"
#include "ExecRestatementReason.h"
#include "ClientAppEncoding.h"
#include "DeskIDEncoding.h"
#include "SettlType.h"
#include "CancelOnDisconnectType.h"
#include "OutboundBusinessHeader.h"
#include "AllocReportType.h"
#include "FlowType.h"
#include "MultiLegReportingType.h"
#include "OrderCategory.h"
#include "PosTransType.h"

namespace b3 {
namespace entrypoint {
namespace fixp {
namespace sbe {

class QuoteCancel
{
private:
    char *m_buffer = nullptr;
    std::uint64_t m_bufferLength = 0;
    std::uint64_t m_offset = 0;
    std::uint64_t m_position = 0;
    std::uint64_t m_actingBlockLength = 0;
    std::uint64_t m_actingVersion = 0;

    inline std::uint64_t *sbePositionPtr() SBE_NOEXCEPT
    {
        return &m_position;
    }

public:
    static const std::uint16_t SBE_BLOCK_LENGTH = static_cast<std::uint16_t>(60);
    static const std::uint16_t SBE_TEMPLATE_ID = static_cast<std::uint16_t>(404);
    static const std::uint16_t SBE_SCHEMA_ID = static_cast<std::uint16_t>(1);
    static const std::uint16_t SBE_SCHEMA_VERSION = static_cast<std::uint16_t>(2);
    static constexpr const char* SBE_SEMANTIC_VERSION = "8.0.0";

    enum MetaAttribute
    {
        EPOCH, TIME_UNIT, SEMANTIC_TYPE, PRESENCE
    };

    union sbe_float_as_uint_u
    {
        float fp_value;
        std::uint32_t uint_value;
    };

    union sbe_double_as_uint_u
    {
        double fp_value;
        std::uint64_t uint_value;
    };

    using messageHeader = MessageHeader;

    QuoteCancel() = default;

    QuoteCancel(
        char *buffer,
        const std::uint64_t offset,
        const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion) :
        m_buffer(buffer),
        m_bufferLength(bufferLength),
        m_offset(offset),
        m_position(sbeCheckPosition(offset + actingBlockLength)),
        m_actingBlockLength(actingBlockLength),
        m_actingVersion(actingVersion)
    {
    }

    QuoteCancel(char *buffer, const std::uint64_t bufferLength) :
        QuoteCancel(buffer, 0, bufferLength, sbeBlockLength(), sbeSchemaVersion())
    {
    }

    QuoteCancel(
        char *buffer,
        const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion) :
        QuoteCancel(buffer, 0, bufferLength, actingBlockLength, actingVersion)
    {
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeBlockLength() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(60);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t sbeBlockAndHeaderLength() SBE_NOEXCEPT
    {
        return messageHeader::encodedLength() + sbeBlockLength();
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeTemplateId() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(404);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeSchemaId() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(1);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeSchemaVersion() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(2);
    }

    SBE_NODISCARD static const char *sbeSemanticVersion() SBE_NOEXCEPT
    {
        return "8.0.0";
    }

    SBE_NODISCARD static SBE_CONSTEXPR const char *sbeSemanticType() SBE_NOEXCEPT
    {
        return "";
    }

    SBE_NODISCARD std::uint64_t offset() const SBE_NOEXCEPT
    {
        return m_offset;
    }

    QuoteCancel &wrapForEncode(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        return *this = QuoteCancel(buffer, offset, bufferLength, sbeBlockLength(), sbeSchemaVersion());
    }

    QuoteCancel &wrapAndApplyHeader(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        messageHeader hdr(buffer, offset, bufferLength, sbeSchemaVersion());

        hdr
            .blockLength(sbeBlockLength())
            .templateId(sbeTemplateId())
            .schemaId(sbeSchemaId())
            .version(sbeSchemaVersion());

        return *this = QuoteCancel(
            buffer,
            offset + messageHeader::encodedLength(),
            bufferLength,
            sbeBlockLength(),
            sbeSchemaVersion());
    }

    QuoteCancel &wrapForDecode(
        char *buffer,
        const std::uint64_t offset,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion,
        const std::uint64_t bufferLength)
    {
        return *this = QuoteCancel(buffer, offset, bufferLength, actingBlockLength, actingVersion);
    }

    QuoteCancel &sbeRewind()
    {
        return wrapForDecode(m_buffer, m_offset, m_actingBlockLength, m_actingVersion, m_bufferLength);
    }

    SBE_NODISCARD std::uint64_t sbePosition() const SBE_NOEXCEPT
    {
        return m_position;
    }

    // NOLINTNEXTLINE(readability-convert-member-functions-to-static)
    std::uint64_t sbeCheckPosition(const std::uint64_t position)
    {
        if (SBE_BOUNDS_CHECK_EXPECT((position > m_bufferLength), false))
        {
            throw std::runtime_error("buffer too short [E100]");
        }
        return position;
    }

    void sbePosition(const std::uint64_t position)
    {
        m_position = sbeCheckPosition(position);
    }

    SBE_NODISCARD std::uint64_t encodedLength() const SBE_NOEXCEPT
    {
        return sbePosition() - m_offset;
    }

    SBE_NODISCARD std::uint64_t decodeLength() const
    {
        QuoteCancel skipper(m_buffer, m_offset, m_bufferLength, sbeBlockLength(), m_actingVersion);
        skipper.skip();
        return skipper.encodedLength();
    }

    SBE_NODISCARD const char *buffer() const SBE_NOEXCEPT
    {
        return m_buffer;
    }

    SBE_NODISCARD char *buffer() SBE_NOEXCEPT
    {
        return m_buffer;
    }

    SBE_NODISCARD std::uint64_t bufferLength() const SBE_NOEXCEPT
    {
        return m_bufferLength;
    }

    SBE_NODISCARD std::uint64_t actingVersion() const SBE_NOEXCEPT
    {
        return m_actingVersion;
    }

    SBE_NODISCARD static const char *messageTypeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t messageTypeId() SBE_NOEXCEPT
    {
        return 35;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t messageTypeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool messageTypeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t messageTypeEncodingOffset() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t messageTypeEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR MessageType::Value messageTypeConstValue() SBE_NOEXCEPT
    {
        return MessageType::Value::QuoteCancel;
    }

    SBE_NODISCARD MessageType::Value messageType() const
    {
        return MessageType::Value::QuoteCancel;
    }

    SBE_NODISCARD std::uint8_t messageTypeRaw() const SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(MessageType::Value::QuoteCancel);
    }

    SBE_NODISCARD static const char *businessHeaderMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t businessHeaderId() SBE_NOEXCEPT
    {
        return 35524;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t businessHeaderSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool businessHeaderInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t businessHeaderEncodingOffset() SBE_NOEXCEPT
    {
        return 0;
    }

private:
    BidirectionalBusinessHeader m_businessHeader;

public:
    SBE_NODISCARD BidirectionalBusinessHeader &businessHeader()
    {
        m_businessHeader.wrap(m_buffer, m_offset + 0, m_actingVersion, m_bufferLength);
        return m_businessHeader;
    }

    SBE_NODISCARD static const char *securityIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityIDId() SBE_NOEXCEPT
    {
        return 48;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDEncodingOffset() SBE_NOEXCEPT
    {
        return 20;
    }

    static SBE_CONSTEXPR std::uint64_t securityIDNullValue() SBE_NOEXCEPT
    {
        return SBE_NULLVALUE_UINT64;
    }

    static SBE_CONSTEXPR std::uint64_t securityIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t securityIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t securityIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t securityID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 20, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    QuoteCancel &securityID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 20, &val, sizeof(std::uint64_t));
        return *this;
    }

    SBE_NODISCARD static const char *securityIDSourceMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityIDSourceId() SBE_NOEXCEPT
    {
        return 22;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityIDSourceSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityIDSourceInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDSourceEncodingOffset() SBE_NOEXCEPT
    {
        return 28;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDSourceEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR SecurityIDSource::Value securityIDSourceConstValue() SBE_NOEXCEPT
    {
        return SecurityIDSource::Value::EXCHANGE_SYMBOL;
    }

    SBE_NODISCARD SecurityIDSource::Value securityIDSource() const
    {
        return SecurityIDSource::Value::EXCHANGE_SYMBOL;
    }

    SBE_NODISCARD char securityIDSourceRaw() const SBE_NOEXCEPT
    {
        return static_cast<char>(SecurityIDSource::Value::EXCHANGE_SYMBOL);
    }

    SBE_NODISCARD static const char *securityExchangeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityExchangeId() SBE_NOEXCEPT
    {
        return 207;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityExchangeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityExchangeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityExchangeEncodingOffset() SBE_NOEXCEPT
    {
        return 28;
    }

    static SBE_CONSTEXPR char securityExchangeNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char securityExchangeMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char securityExchangeMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t securityExchangeEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    static SBE_CONSTEXPR std::uint64_t securityExchangeLength() SBE_NOEXCEPT
    {
        return 4;
    }

    SBE_NODISCARD const char *securityExchange() const
    {
        static const std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70, 0 };

        return (const char *)securityExchangeValues;
    }

    SBE_NODISCARD char securityExchange(const std::uint64_t index) const
    {
        static const std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70, 0 };

        return (char)securityExchangeValues[index];
    }

    std::uint64_t getSecurityExchange(char *dst, const std::uint64_t length) const
    {
        static std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70 };
        std::uint64_t bytesToCopy = length < sizeof(securityExchangeValues) ? length : sizeof(securityExchangeValues);

        std::memcpy(dst, securityExchangeValues, static_cast<std::size_t>(bytesToCopy));
        return bytesToCopy;
    }

    std::string getSecurityExchangeAsString() const
    {
        static const std::uint8_t SecurityExchangeValues[] = { 66, 86, 77, 70 };

        return std::string((const char *)SecurityExchangeValues, 4);
    }

    std::string getSecurityExchangeAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getSecurityExchangeAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    SBE_NODISCARD static const char *quoteIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t quoteIDId() SBE_NOEXCEPT
    {
        return 117;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t quoteIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool quoteIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t quoteIDEncodingOffset() SBE_NOEXCEPT
    {
        return 28;
    }

    static SBE_CONSTEXPR std::uint64_t quoteIDNullValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t quoteIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t quoteIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t quoteIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t quoteID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 28, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    QuoteCancel &quoteID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 28, &val, sizeof(std::uint64_t));
        return *this;
    }

    SBE_NODISCARD static const char *quoteCancelTypeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t quoteCancelTypeId() SBE_NOEXCEPT
    {
        return 298;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t quoteCancelTypeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool quoteCancelTypeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t quoteCancelTypeEncodingOffset() SBE_NOEXCEPT
    {
        return 36;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t quoteCancelTypeEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR QuoteCancelType::Value quoteCancelTypeConstValue() SBE_NOEXCEPT
    {
        return QuoteCancelType::Value::CANCEL_FOR_QUOTE_ID;
    }

    SBE_NODISCARD QuoteCancelType::Value quoteCancelType() const
    {
        return QuoteCancelType::Value::CANCEL_FOR_QUOTE_ID;
    }

    SBE_NODISCARD std::uint8_t quoteCancelTypeRaw() const SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(QuoteCancelType::Value::CANCEL_FOR_QUOTE_ID);
    }

    SBE_NODISCARD static const char *accountMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t accountId() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t accountSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool accountInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t accountEncodingOffset() SBE_NOEXCEPT
    {
        return 36;
    }

    static SBE_CONSTEXPR std::uint32_t accountNullValue() SBE_NOEXCEPT
    {
        return UINT32_C(0x0);
    }

    static SBE_CONSTEXPR std::uint32_t accountMinValue() SBE_NOEXCEPT
    {
        return UINT32_C(0x0);
    }

    static SBE_CONSTEXPR std::uint32_t accountMaxValue() SBE_NOEXCEPT
    {
        return UINT32_C(0xfffffffe);
    }

    static SBE_CONSTEXPR std::size_t accountEncodingLength() SBE_NOEXCEPT
    {
        return 4;
    }

    SBE_NODISCARD std::uint32_t account() const SBE_NOEXCEPT
    {
        std::uint32_t val;
        std::memcpy(&val, m_buffer + m_offset + 36, sizeof(std::uint32_t));
        return SBE_LITTLE_ENDIAN_ENCODE_32(val);
    }

    QuoteCancel &account(const std::uint32_t value) SBE_NOEXCEPT
    {
        std::uint32_t val = SBE_LITTLE_ENDIAN_ENCODE_32(value);
        std::memcpy(m_buffer + m_offset + 36, &val, sizeof(std::uint32_t));
        return *this;
    }

    SBE_NODISCARD static const char *senderLocationMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t senderLocationId() SBE_NOEXCEPT
    {
        return 35503;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t senderLocationSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool senderLocationInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t senderLocationEncodingOffset() SBE_NOEXCEPT
    {
        return 40;
    }

    static SBE_CONSTEXPR char senderLocationNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char senderLocationMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char senderLocationMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t senderLocationEncodingLength() SBE_NOEXCEPT
    {
        return 10;
    }

    static SBE_CONSTEXPR std::uint64_t senderLocationLength() SBE_NOEXCEPT
    {
        return 10;
    }

    SBE_NODISCARD const char *senderLocation() const SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 40;
    }

    SBE_NODISCARD char *senderLocation() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 40;
    }

    SBE_NODISCARD char senderLocation(const std::uint64_t index) const
    {
        if (index >= 10)
        {
            throw std::runtime_error("index out of range for senderLocation [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 40 + (index * 1), sizeof(char));
        return (val);
    }

    QuoteCancel &senderLocation(const std::uint64_t index, const char value)
    {
        if (index >= 10)
        {
            throw std::runtime_error("index out of range for senderLocation [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 40 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getSenderLocation(char *const dst, const std::uint64_t length) const
    {
        if (length > 10)
        {
            throw std::runtime_error("length too large for getSenderLocation [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 40, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    QuoteCancel &putSenderLocation(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 40, src, sizeof(char) * 10);
        return *this;
    }

    SBE_NODISCARD std::string getSenderLocationAsString() const
    {
        const char *buffer = m_buffer + m_offset + 40;
        std::size_t length = 0;

        for (; length < 10 && *(buffer + length) != '\0'; ++length);
        std::string result(buffer, length);

        return result;
    }

    std::string getSenderLocationAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getSenderLocationAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    SBE_NODISCARD std::string_view getSenderLocationAsStringView() const SBE_NOEXCEPT
    {
        const char *buffer = m_buffer + m_offset + 40;
        std::size_t length = 0;

        for (; length < 10 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    QuoteCancel &putSenderLocation(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 10)
        {
            throw std::runtime_error("string too large for putSenderLocation [E106]");
        }

        std::memcpy(m_buffer + m_offset + 40, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 10; ++start)
        {
            m_buffer[m_offset + 40 + start] = 0;
        }

        return *this;
    }
    #else
    QuoteCancel &putSenderLocation(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 10)
        {
            throw std::runtime_error("string too large for putSenderLocation [E106]");
        }

        std::memcpy(m_buffer + m_offset + 40, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 10; ++start)
        {
            m_buffer[m_offset + 40 + start] = 0;
        }

        return *this;
    }
    #endif

    SBE_NODISCARD static const char *enteringTraderMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t enteringTraderId() SBE_NOEXCEPT
    {
        return 35502;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t enteringTraderSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool enteringTraderInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t enteringTraderEncodingOffset() SBE_NOEXCEPT
    {
        return 50;
    }

    static SBE_CONSTEXPR char enteringTraderNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char enteringTraderMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char enteringTraderMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t enteringTraderEncodingLength() SBE_NOEXCEPT
    {
        return 5;
    }

    static SBE_CONSTEXPR std::uint64_t enteringTraderLength() SBE_NOEXCEPT
    {
        return 5;
    }

    SBE_NODISCARD const char *enteringTrader() const SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 50;
    }

    SBE_NODISCARD char *enteringTrader() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 50;
    }

    SBE_NODISCARD char enteringTrader(const std::uint64_t index) const
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for enteringTrader [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 50 + (index * 1), sizeof(char));
        return (val);
    }

    QuoteCancel &enteringTrader(const std::uint64_t index, const char value)
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for enteringTrader [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 50 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getEnteringTrader(char *const dst, const std::uint64_t length) const
    {
        if (length > 5)
        {
            throw std::runtime_error("length too large for getEnteringTrader [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 50, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    QuoteCancel &putEnteringTrader(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 50, src, sizeof(char) * 5);
        return *this;
    }

    SBE_NODISCARD std::string getEnteringTraderAsString() const
    {
        const char *buffer = m_buffer + m_offset + 50;
        std::size_t length = 0;

        for (; length < 5 && *(buffer + length) != '\0'; ++length);
        std::string result(buffer, length);

        return result;
    }

    std::string getEnteringTraderAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getEnteringTraderAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    SBE_NODISCARD std::string_view getEnteringTraderAsStringView() const SBE_NOEXCEPT
    {
        const char *buffer = m_buffer + m_offset + 50;
        std::size_t length = 0;

        for (; length < 5 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    QuoteCancel &putEnteringTrader(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putEnteringTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 50, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 50 + start] = 0;
        }

        return *this;
    }
    #else
    QuoteCancel &putEnteringTrader(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putEnteringTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 50, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 50 + start] = 0;
        }

        return *this;
    }
    #endif

    SBE_NODISCARD static const char *executingTraderMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t executingTraderId() SBE_NOEXCEPT
    {
        return 35506;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t executingTraderSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool executingTraderInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t executingTraderEncodingOffset() SBE_NOEXCEPT
    {
        return 55;
    }

    static SBE_CONSTEXPR char executingTraderNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char executingTraderMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char executingTraderMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t executingTraderEncodingLength() SBE_NOEXCEPT
    {
        return 5;
    }

    static SBE_CONSTEXPR std::uint64_t executingTraderLength() SBE_NOEXCEPT
    {
        return 5;
    }

    SBE_NODISCARD const char *executingTrader() const SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 55;
    }

    SBE_NODISCARD char *executingTrader() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 55;
    }

    SBE_NODISCARD char executingTrader(const std::uint64_t index) const
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for executingTrader [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 55 + (index * 1), sizeof(char));
        return (val);
    }

    QuoteCancel &executingTrader(const std::uint64_t index, const char value)
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for executingTrader [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 55 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getExecutingTrader(char *const dst, const std::uint64_t length) const
    {
        if (length > 5)
        {
            throw std::runtime_error("length too large for getExecutingTrader [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 55, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    QuoteCancel &putExecutingTrader(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 55, src, sizeof(char) * 5);
        return *this;
    }

    SBE_NODISCARD std::string getExecutingTraderAsString() const
    {
        const char *buffer = m_buffer + m_offset + 55;
        std::size_t length = 0;

        for (; length < 5 && *(buffer + length) != '\0'; ++length);
        std::string result(buffer, length);

        return result;
    }

    std::string getExecutingTraderAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getExecutingTraderAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    SBE_NODISCARD std::string_view getExecutingTraderAsStringView() const SBE_NOEXCEPT
    {
        const char *buffer = m_buffer + m_offset + 55;
        std::size_t length = 0;

        for (; length < 5 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    QuoteCancel &putExecutingTrader(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putExecutingTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 55, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 55 + start] = 0;
        }

        return *this;
    }
    #else
    QuoteCancel &putExecutingTrader(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putExecutingTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 55, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 55 + start] = 0;
        }

        return *this;
    }
    #endif

    SBE_NODISCARD static const char *privateQuoteMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t privateQuoteId() SBE_NOEXCEPT
    {
        return 1171;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t privateQuoteSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool privateQuoteInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t privateQuoteEncodingOffset() SBE_NOEXCEPT
    {
        return 60;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t privateQuoteEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR Boolean::Value privateQuoteConstValue() SBE_NOEXCEPT
    {
        return Boolean::Value::TRUE_VALUE;
    }

    SBE_NODISCARD Boolean::Value privateQuote() const
    {
        return Boolean::Value::TRUE_VALUE;
    }

    SBE_NODISCARD std::uint8_t privateQuoteRaw() const SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(Boolean::Value::TRUE_VALUE);
    }

    SBE_NODISCARD static const char *quoteReqIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static const char *quoteReqIDCharacterEncoding() SBE_NOEXCEPT
    {
        return "ASCII";
    }

    static SBE_CONSTEXPR std::uint64_t quoteReqIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    bool quoteReqIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    static SBE_CONSTEXPR std::uint16_t quoteReqIDId() SBE_NOEXCEPT
    {
        return 131;
    }

    static SBE_CONSTEXPR std::uint64_t quoteReqIDHeaderLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t quoteReqIDLength() const
    {
        std::uint8_t length;
        std::memcpy(&length, m_buffer + sbePosition(), sizeof(std::uint8_t));
        return (length);
    }

    std::uint64_t skipQuoteReqID()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        sbePosition(lengthPosition + lengthOfLengthField + dataLength);
        return dataLength;
    }

    SBE_NODISCARD const char *quoteReqID()
    {
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + sbePosition(), sizeof(std::uint8_t));
        const char *fieldPtr = m_buffer + sbePosition() + 1;
        sbePosition(sbePosition() + 1 + (lengthFieldValue));
        return fieldPtr;
    }

    std::uint64_t getQuoteReqID(char *dst, const std::uint64_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t bytesToCopy = length < dataLength ? length : dataLength;
        std::uint64_t pos = sbePosition();
        sbePosition(pos + dataLength);
        std::memcpy(dst, m_buffer + pos, static_cast<std::size_t>(bytesToCopy));
        return bytesToCopy;
    }

    QuoteCancel &putQuoteReqID(const char *src, const std::uint8_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue = (length);
        sbePosition(lengthPosition + lengthOfLengthField);
        std::memcpy(m_buffer + lengthPosition, &lengthFieldValue, sizeof(std::uint8_t));
        if (length != std::uint8_t(0))
        {
            std::uint64_t pos = sbePosition();
            sbePosition(pos + length);
            std::memcpy(m_buffer + pos, src, length);
        }
        return *this;
    }

    std::string getQuoteReqIDAsString()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }

    std::string getQuoteReqIDAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getQuoteReqIDAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    std::string_view getQuoteReqIDAsStringView()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string_view result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }
    #endif

    QuoteCancel &putQuoteReqID(const std::string &str)
    {
        if (str.length() > 20)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putQuoteReqID(str.data(), static_cast<std::uint8_t>(str.length()));
    }

    #if __cplusplus >= 201703L
    QuoteCancel &putQuoteReqID(const std::string_view str)
    {
        if (str.length() > 20)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putQuoteReqID(str.data(), static_cast<std::uint8_t>(str.length()));
    }
    #endif

    SBE_NODISCARD static const char *deskIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::SEMANTIC_TYPE: return "String";
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static const char *deskIDCharacterEncoding() SBE_NOEXCEPT
    {
        return "ASCII";
    }

    static SBE_CONSTEXPR std::uint64_t deskIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    bool deskIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    static SBE_CONSTEXPR std::uint16_t deskIDId() SBE_NOEXCEPT
    {
        return 35510;
    }

    static SBE_CONSTEXPR std::uint64_t deskIDHeaderLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t deskIDLength() const
    {
        std::uint8_t length;
        std::memcpy(&length, m_buffer + sbePosition(), sizeof(std::uint8_t));
        return (length);
    }

    std::uint64_t skipDeskID()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        sbePosition(lengthPosition + lengthOfLengthField + dataLength);
        return dataLength;
    }

    SBE_NODISCARD const char *deskID()
    {
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + sbePosition(), sizeof(std::uint8_t));
        const char *fieldPtr = m_buffer + sbePosition() + 1;
        sbePosition(sbePosition() + 1 + (lengthFieldValue));
        return fieldPtr;
    }

    std::uint64_t getDeskID(char *dst, const std::uint64_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t bytesToCopy = length < dataLength ? length : dataLength;
        std::uint64_t pos = sbePosition();
        sbePosition(pos + dataLength);
        std::memcpy(dst, m_buffer + pos, static_cast<std::size_t>(bytesToCopy));
        return bytesToCopy;
    }

    QuoteCancel &putDeskID(const char *src, const std::uint8_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue = (length);
        sbePosition(lengthPosition + lengthOfLengthField);
        std::memcpy(m_buffer + lengthPosition, &lengthFieldValue, sizeof(std::uint8_t));
        if (length != std::uint8_t(0))
        {
            std::uint64_t pos = sbePosition();
            sbePosition(pos + length);
            std::memcpy(m_buffer + pos, src, length);
        }
        return *this;
    }

    std::string getDeskIDAsString()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }

    std::string getDeskIDAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getDeskIDAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    std::string_view getDeskIDAsStringView()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string_view result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }
    #endif

    QuoteCancel &putDeskID(const std::string &str)
    {
        if (str.length() > 20)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putDeskID(str.data(), static_cast<std::uint8_t>(str.length()));
    }

    #if __cplusplus >= 201703L
    QuoteCancel &putDeskID(const std::string_view str)
    {
        if (str.length() > 20)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putDeskID(str.data(), static_cast<std::uint8_t>(str.length()));
    }
    #endif

    SBE_NODISCARD static const char *memoMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::SEMANTIC_TYPE: return "String";
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static const char *memoCharacterEncoding() SBE_NOEXCEPT
    {
        return "ASCII";
    }

    static SBE_CONSTEXPR std::uint64_t memoSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    bool memoInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    static SBE_CONSTEXPR std::uint16_t memoId() SBE_NOEXCEPT
    {
        return 5149;
    }

    static SBE_CONSTEXPR std::uint64_t memoHeaderLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t memoLength() const
    {
        std::uint8_t length;
        std::memcpy(&length, m_buffer + sbePosition(), sizeof(std::uint8_t));
        return (length);
    }

    std::uint64_t skipMemo()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        sbePosition(lengthPosition + lengthOfLengthField + dataLength);
        return dataLength;
    }

    SBE_NODISCARD const char *memo()
    {
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + sbePosition(), sizeof(std::uint8_t));
        const char *fieldPtr = m_buffer + sbePosition() + 1;
        sbePosition(sbePosition() + 1 + (lengthFieldValue));
        return fieldPtr;
    }

    std::uint64_t getMemo(char *dst, const std::uint64_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t bytesToCopy = length < dataLength ? length : dataLength;
        std::uint64_t pos = sbePosition();
        sbePosition(pos + dataLength);
        std::memcpy(dst, m_buffer + pos, static_cast<std::size_t>(bytesToCopy));
        return bytesToCopy;
    }

    QuoteCancel &putMemo(const char *src, const std::uint8_t length)
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        std::uint8_t lengthFieldValue = (length);
        sbePosition(lengthPosition + lengthOfLengthField);
        std::memcpy(m_buffer + lengthPosition, &lengthFieldValue, sizeof(std::uint8_t));
        if (length != std::uint8_t(0))
        {
            std::uint64_t pos = sbePosition();
            sbePosition(pos + length);
            std::memcpy(m_buffer + pos, src, length);
        }
        return *this;
    }

    std::string getMemoAsString()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }

    std::string getMemoAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getMemoAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    std::string_view getMemoAsStringView()
    {
        std::uint64_t lengthOfLengthField = 1;
        std::uint64_t lengthPosition = sbePosition();
        sbePosition(lengthPosition + lengthOfLengthField);
        std::uint8_t lengthFieldValue;
        std::memcpy(&lengthFieldValue, m_buffer + lengthPosition, sizeof(std::uint8_t));
        std::uint64_t dataLength = (lengthFieldValue);
        std::uint64_t pos = sbePosition();
        const std::string_view result(m_buffer + pos, dataLength);
        sbePosition(pos + dataLength);
        return result;
    }
    #endif

    QuoteCancel &putMemo(const std::string &str)
    {
        if (str.length() > 40)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putMemo(str.data(), static_cast<std::uint8_t>(str.length()));
    }

    #if __cplusplus >= 201703L
    QuoteCancel &putMemo(const std::string_view str)
    {
        if (str.length() > 40)
        {
            throw std::runtime_error("std::string too long for length type [E109]");
        }
        return putMemo(str.data(), static_cast<std::uint8_t>(str.length()));
    }
    #endif

template<typename CharT, typename Traits>
friend std::basic_ostream<CharT, Traits> & operator << (
    std::basic_ostream<CharT, Traits> &builder, QuoteCancel &_writer)
{
    QuoteCancel writer(
        _writer.m_buffer,
        _writer.m_offset,
        _writer.m_bufferLength,
        _writer.m_actingBlockLength,
        _writer.m_actingVersion);

    builder << '{';
    builder << R"("Name": "QuoteCancel", )";
    builder << R"("sbeTemplateId": )";
    builder << writer.sbeTemplateId();
    builder << ", ";

    builder << R"("messageType": )";
    builder << '"' << writer.messageType() << '"';

    builder << ", ";
    builder << R"("businessHeader": )";
    builder << writer.businessHeader();

    builder << ", ";
    builder << R"("securityID": )";
    builder << +writer.securityID();

    builder << ", ";
    builder << R"("securityIDSource": )";
    builder << '"' << writer.securityIDSource() << '"';

    builder << ", ";
    builder << R"("quoteID": )";
    builder << +writer.quoteID();

    builder << ", ";
    builder << R"("quoteCancelType": )";
    builder << '"' << writer.quoteCancelType() << '"';

    builder << ", ";
    builder << R"("account": )";
    builder << +writer.account();

    builder << ", ";
    builder << R"("senderLocation": )";
    builder << '"' <<
        writer.getSenderLocationAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("enteringTrader": )";
    builder << '"' <<
        writer.getEnteringTraderAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("executingTrader": )";
    builder << '"' <<
        writer.getExecutingTraderAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("privateQuote": )";
    builder << '"' << writer.privateQuote() << '"';

    builder << ", ";
    builder << R"("quoteReqID": )";
    builder << '"' <<
        writer.getQuoteReqIDAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("deskID": )";
    builder << '"' <<
        writer.getDeskIDAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("memo": )";
    builder << '"' <<
        writer.getMemoAsJsonEscapedString().c_str() << '"';

    builder << '}';

    return builder;
}

void skip()
{
    skipQuoteReqID();
    skipDeskID();
    skipMemo();
}

SBE_NODISCARD static SBE_CONSTEXPR bool isConstLength() SBE_NOEXCEPT
{
    return false;
}

SBE_NODISCARD static std::size_t computeLength(
    std::size_t quoteReqIDLength = 0,
    std::size_t deskIDLength = 0,
    std::size_t memoLength = 0)
{
#if defined(__GNUG__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
#endif
    std::size_t length = sbeBlockLength();

    length += quoteReqIDHeaderLength();
    if (quoteReqIDLength > 20LL)
    {
        throw std::runtime_error("quoteReqIDLength too long for length type [E109]");
    }
    length += quoteReqIDLength;

    length += deskIDHeaderLength();
    if (deskIDLength > 20LL)
    {
        throw std::runtime_error("deskIDLength too long for length type [E109]");
    }
    length += deskIDLength;

    length += memoHeaderLength();
    if (memoLength > 40LL)
    {
        throw std::runtime_error("memoLength too long for length type [E109]");
    }
    length += memoLength;

    return length;
#if defined(__GNUG__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif
}
};
}
}
}
}
#endif
