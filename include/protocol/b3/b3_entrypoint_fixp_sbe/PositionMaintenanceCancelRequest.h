/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_POSITIONMAINTENANCECANCELREQUEST_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_POSITIONMAINTENANCECANCELREQUEST_CXX_H_

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

class PositionMaintenanceCancelRequest
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
    static const std::uint16_t SBE_BLOCK_LENGTH = static_cast<std::uint16_t>(65);
    static const std::uint16_t SBE_TEMPLATE_ID = static_cast<std::uint16_t>(501);
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

    PositionMaintenanceCancelRequest() = default;

    PositionMaintenanceCancelRequest(
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

    PositionMaintenanceCancelRequest(char *buffer, const std::uint64_t bufferLength) :
        PositionMaintenanceCancelRequest(buffer, 0, bufferLength, sbeBlockLength(), sbeSchemaVersion())
    {
    }

    PositionMaintenanceCancelRequest(
        char *buffer,
        const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion) :
        PositionMaintenanceCancelRequest(buffer, 0, bufferLength, actingBlockLength, actingVersion)
    {
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeBlockLength() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(65);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t sbeBlockAndHeaderLength() SBE_NOEXCEPT
    {
        return messageHeader::encodedLength() + sbeBlockLength();
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeTemplateId() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(501);
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

    PositionMaintenanceCancelRequest &wrapForEncode(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        return *this = PositionMaintenanceCancelRequest(buffer, offset, bufferLength, sbeBlockLength(), sbeSchemaVersion());
    }

    PositionMaintenanceCancelRequest &wrapAndApplyHeader(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        messageHeader hdr(buffer, offset, bufferLength, sbeSchemaVersion());

        hdr
            .blockLength(sbeBlockLength())
            .templateId(sbeTemplateId())
            .schemaId(sbeSchemaId())
            .version(sbeSchemaVersion());

        return *this = PositionMaintenanceCancelRequest(
            buffer,
            offset + messageHeader::encodedLength(),
            bufferLength,
            sbeBlockLength(),
            sbeSchemaVersion());
    }

    PositionMaintenanceCancelRequest &wrapForDecode(
        char *buffer,
        const std::uint64_t offset,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion,
        const std::uint64_t bufferLength)
    {
        return *this = PositionMaintenanceCancelRequest(buffer, offset, bufferLength, actingBlockLength, actingVersion);
    }

    PositionMaintenanceCancelRequest &sbeRewind()
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
        PositionMaintenanceCancelRequest skipper(m_buffer, m_offset, m_bufferLength, sbeBlockLength(), m_actingVersion);
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
        return MessageType::Value::PositionMaintenanceCancelRequest;
    }

    SBE_NODISCARD MessageType::Value messageType() const
    {
        return MessageType::Value::PositionMaintenanceCancelRequest;
    }

    SBE_NODISCARD std::uint8_t messageTypeRaw() const SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(MessageType::Value::PositionMaintenanceCancelRequest);
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
    InboundBusinessHeader m_businessHeader;

public:
    SBE_NODISCARD InboundBusinessHeader &businessHeader()
    {
        m_businessHeader.wrap(m_buffer, m_offset + 0, m_actingVersion, m_bufferLength);
        return m_businessHeader;
    }

    SBE_NODISCARD static const char *posReqIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t posReqIDId() SBE_NOEXCEPT
    {
        return 710;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t posReqIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool posReqIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t posReqIDEncodingOffset() SBE_NOEXCEPT
    {
        return 18;
    }

    static SBE_CONSTEXPR std::uint64_t posReqIDNullValue() SBE_NOEXCEPT
    {
        return SBE_NULLVALUE_UINT64;
    }

    static SBE_CONSTEXPR std::uint64_t posReqIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t posReqIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t posReqIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t posReqID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 18, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    PositionMaintenanceCancelRequest &posReqID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 18, &val, sizeof(std::uint64_t));
        return *this;
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
        return 26;
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
        std::memcpy(&val, m_buffer + m_offset + 26, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    PositionMaintenanceCancelRequest &securityID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 26, &val, sizeof(std::uint64_t));
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
        return 34;
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
        return 34;
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

    SBE_NODISCARD static const char *origPosReqRefIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t origPosReqRefIDId() SBE_NOEXCEPT
    {
        return 713;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t origPosReqRefIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool origPosReqRefIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t origPosReqRefIDEncodingOffset() SBE_NOEXCEPT
    {
        return 34;
    }

    static SBE_CONSTEXPR std::uint64_t origPosReqRefIDNullValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t origPosReqRefIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t origPosReqRefIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t origPosReqRefIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t origPosReqRefID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 34, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    PositionMaintenanceCancelRequest &origPosReqRefID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 34, &val, sizeof(std::uint64_t));
        return *this;
    }

    SBE_NODISCARD static const char *posMaintRptRefIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t posMaintRptRefIDId() SBE_NOEXCEPT
    {
        return 714;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t posMaintRptRefIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool posMaintRptRefIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t posMaintRptRefIDEncodingOffset() SBE_NOEXCEPT
    {
        return 42;
    }

    static SBE_CONSTEXPR std::uint64_t posMaintRptRefIDNullValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t posMaintRptRefIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t posMaintRptRefIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t posMaintRptRefIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t posMaintRptRefID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 42, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    PositionMaintenanceCancelRequest &posMaintRptRefID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 42, &val, sizeof(std::uint64_t));
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
        return 50;
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
        return m_buffer + m_offset + 50;
    }

    SBE_NODISCARD char *senderLocation() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 50;
    }

    SBE_NODISCARD char senderLocation(const std::uint64_t index) const
    {
        if (index >= 10)
        {
            throw std::runtime_error("index out of range for senderLocation [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 50 + (index * 1), sizeof(char));
        return (val);
    }

    PositionMaintenanceCancelRequest &senderLocation(const std::uint64_t index, const char value)
    {
        if (index >= 10)
        {
            throw std::runtime_error("index out of range for senderLocation [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 50 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getSenderLocation(char *const dst, const std::uint64_t length) const
    {
        if (length > 10)
        {
            throw std::runtime_error("length too large for getSenderLocation [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 50, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    PositionMaintenanceCancelRequest &putSenderLocation(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 50, src, sizeof(char) * 10);
        return *this;
    }

    SBE_NODISCARD std::string getSenderLocationAsString() const
    {
        const char *buffer = m_buffer + m_offset + 50;
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
        const char *buffer = m_buffer + m_offset + 50;
        std::size_t length = 0;

        for (; length < 10 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    PositionMaintenanceCancelRequest &putSenderLocation(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 10)
        {
            throw std::runtime_error("string too large for putSenderLocation [E106]");
        }

        std::memcpy(m_buffer + m_offset + 50, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 10; ++start)
        {
            m_buffer[m_offset + 50 + start] = 0;
        }

        return *this;
    }
    #else
    PositionMaintenanceCancelRequest &putSenderLocation(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 10)
        {
            throw std::runtime_error("string too large for putSenderLocation [E106]");
        }

        std::memcpy(m_buffer + m_offset + 50, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 10; ++start)
        {
            m_buffer[m_offset + 50 + start] = 0;
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
        return 60;
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
        return m_buffer + m_offset + 60;
    }

    SBE_NODISCARD char *enteringTrader() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 60;
    }

    SBE_NODISCARD char enteringTrader(const std::uint64_t index) const
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for enteringTrader [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 60 + (index * 1), sizeof(char));
        return (val);
    }

    PositionMaintenanceCancelRequest &enteringTrader(const std::uint64_t index, const char value)
    {
        if (index >= 5)
        {
            throw std::runtime_error("index out of range for enteringTrader [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 60 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getEnteringTrader(char *const dst, const std::uint64_t length) const
    {
        if (length > 5)
        {
            throw std::runtime_error("length too large for getEnteringTrader [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 60, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    PositionMaintenanceCancelRequest &putEnteringTrader(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 60, src, sizeof(char) * 5);
        return *this;
    }

    SBE_NODISCARD std::string getEnteringTraderAsString() const
    {
        const char *buffer = m_buffer + m_offset + 60;
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
        const char *buffer = m_buffer + m_offset + 60;
        std::size_t length = 0;

        for (; length < 5 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    PositionMaintenanceCancelRequest &putEnteringTrader(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putEnteringTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 60, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 60 + start] = 0;
        }

        return *this;
    }
    #else
    PositionMaintenanceCancelRequest &putEnteringTrader(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 5)
        {
            throw std::runtime_error("string too large for putEnteringTrader [E106]");
        }

        std::memcpy(m_buffer + m_offset + 60, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 5; ++start)
        {
            m_buffer[m_offset + 60 + start] = 0;
        }

        return *this;
    }
    #endif

template<typename CharT, typename Traits>
friend std::basic_ostream<CharT, Traits> & operator << (
    std::basic_ostream<CharT, Traits> &builder, PositionMaintenanceCancelRequest &_writer)
{
    PositionMaintenanceCancelRequest writer(
        _writer.m_buffer,
        _writer.m_offset,
        _writer.m_bufferLength,
        _writer.m_actingBlockLength,
        _writer.m_actingVersion);

    builder << '{';
    builder << R"("Name": "PositionMaintenanceCancelRequest", )";
    builder << R"("sbeTemplateId": )";
    builder << writer.sbeTemplateId();
    builder << ", ";

    builder << R"("messageType": )";
    builder << '"' << writer.messageType() << '"';

    builder << ", ";
    builder << R"("businessHeader": )";
    builder << writer.businessHeader();

    builder << ", ";
    builder << R"("posReqID": )";
    builder << +writer.posReqID();

    builder << ", ";
    builder << R"("securityID": )";
    builder << +writer.securityID();

    builder << ", ";
    builder << R"("securityIDSource": )";
    builder << '"' << writer.securityIDSource() << '"';

    builder << ", ";
    builder << R"("origPosReqRefID": )";
    builder << +writer.origPosReqRefID();

    builder << ", ";
    builder << R"("posMaintRptRefID": )";
    builder << +writer.posMaintRptRefID();

    builder << ", ";
    builder << R"("senderLocation": )";
    builder << '"' <<
        writer.getSenderLocationAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("enteringTrader": )";
    builder << '"' <<
        writer.getEnteringTraderAsJsonEscapedString().c_str() << '"';

    builder << '}';

    return builder;
}

void skip()
{
}

SBE_NODISCARD static SBE_CONSTEXPR bool isConstLength() SBE_NOEXCEPT
{
    return true;
}

SBE_NODISCARD static std::size_t computeLength()
{
#if defined(__GNUG__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
#endif
    std::size_t length = sbeBlockLength();

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
