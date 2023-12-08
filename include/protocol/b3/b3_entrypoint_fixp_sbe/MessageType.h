/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_MESSAGETYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_MESSAGETYPE_CXX_H_

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

class MessageType
{
public:
    enum Value
    {
        Negotiate = static_cast<std::uint8_t>(0),
        NegotiateResponse = static_cast<std::uint8_t>(1),
        NegotiateReject = static_cast<std::uint8_t>(2),
        Establish = static_cast<std::uint8_t>(3),
        EstablishAck = static_cast<std::uint8_t>(4),
        EstablishReject = static_cast<std::uint8_t>(5),
        Terminate = static_cast<std::uint8_t>(6),
        NotApplied = static_cast<std::uint8_t>(9),
        RetransmitRequest = static_cast<std::uint8_t>(10),
        Retransmission = static_cast<std::uint8_t>(11),
        RetransmitReject = static_cast<std::uint8_t>(12),
        Sequence = static_cast<std::uint8_t>(13),
        BusinessMessageReject = static_cast<std::uint8_t>(14),
        SimpleNewOrder = static_cast<std::uint8_t>(15),
        SimpleModifyOrder = static_cast<std::uint8_t>(16),
        NewOrderSingle = static_cast<std::uint8_t>(17),
        OrderCancelReplaceRequest = static_cast<std::uint8_t>(18),
        OrderCancelRequest = static_cast<std::uint8_t>(19),
        NewOrderCross = static_cast<std::uint8_t>(20),
        ExecutionReport_New = static_cast<std::uint8_t>(21),
        ExecutionReport_Modify = static_cast<std::uint8_t>(22),
        ExecutionReport_Cancel = static_cast<std::uint8_t>(23),
        ExecutionReport_Trade = static_cast<std::uint8_t>(24),
        ExecutionReport_Reject = static_cast<std::uint8_t>(25),
        ExecutionReport_Forward = static_cast<std::uint8_t>(26),
        SecurityDefinitionRequest = static_cast<std::uint8_t>(27),
        SecurityDefinitionResponse = static_cast<std::uint8_t>(28),
        OrderMassActionRequest = static_cast<std::uint8_t>(29),
        OrderMassActionReport = static_cast<std::uint8_t>(30),
        QuoteRequest = static_cast<std::uint8_t>(31),
        QuoteStatusReport = static_cast<std::uint8_t>(32),
        Quote = static_cast<std::uint8_t>(33),
        QuoteCancel = static_cast<std::uint8_t>(34),
        QuoteRequestReject = static_cast<std::uint8_t>(35),
        PositionMaintenanceCancelRequest = static_cast<std::uint8_t>(36),
        PositionMaintenanceRequest = static_cast<std::uint8_t>(37),
        PositionMaintenanceReport = static_cast<std::uint8_t>(38),
        AllocationInstruction = static_cast<std::uint8_t>(39),
        AllocationReport = static_cast<std::uint8_t>(40),
        NULL_VALUE = static_cast<std::uint8_t>(255)
    };

    static MessageType::Value get(const std::uint8_t value)
    {
        switch (value)
        {
            case static_cast<std::uint8_t>(0): return Negotiate;
            case static_cast<std::uint8_t>(1): return NegotiateResponse;
            case static_cast<std::uint8_t>(2): return NegotiateReject;
            case static_cast<std::uint8_t>(3): return Establish;
            case static_cast<std::uint8_t>(4): return EstablishAck;
            case static_cast<std::uint8_t>(5): return EstablishReject;
            case static_cast<std::uint8_t>(6): return Terminate;
            case static_cast<std::uint8_t>(9): return NotApplied;
            case static_cast<std::uint8_t>(10): return RetransmitRequest;
            case static_cast<std::uint8_t>(11): return Retransmission;
            case static_cast<std::uint8_t>(12): return RetransmitReject;
            case static_cast<std::uint8_t>(13): return Sequence;
            case static_cast<std::uint8_t>(14): return BusinessMessageReject;
            case static_cast<std::uint8_t>(15): return SimpleNewOrder;
            case static_cast<std::uint8_t>(16): return SimpleModifyOrder;
            case static_cast<std::uint8_t>(17): return NewOrderSingle;
            case static_cast<std::uint8_t>(18): return OrderCancelReplaceRequest;
            case static_cast<std::uint8_t>(19): return OrderCancelRequest;
            case static_cast<std::uint8_t>(20): return NewOrderCross;
            case static_cast<std::uint8_t>(21): return ExecutionReport_New;
            case static_cast<std::uint8_t>(22): return ExecutionReport_Modify;
            case static_cast<std::uint8_t>(23): return ExecutionReport_Cancel;
            case static_cast<std::uint8_t>(24): return ExecutionReport_Trade;
            case static_cast<std::uint8_t>(25): return ExecutionReport_Reject;
            case static_cast<std::uint8_t>(26): return ExecutionReport_Forward;
            case static_cast<std::uint8_t>(27): return SecurityDefinitionRequest;
            case static_cast<std::uint8_t>(28): return SecurityDefinitionResponse;
            case static_cast<std::uint8_t>(29): return OrderMassActionRequest;
            case static_cast<std::uint8_t>(30): return OrderMassActionReport;
            case static_cast<std::uint8_t>(31): return QuoteRequest;
            case static_cast<std::uint8_t>(32): return QuoteStatusReport;
            case static_cast<std::uint8_t>(33): return Quote;
            case static_cast<std::uint8_t>(34): return QuoteCancel;
            case static_cast<std::uint8_t>(35): return QuoteRequestReject;
            case static_cast<std::uint8_t>(36): return PositionMaintenanceCancelRequest;
            case static_cast<std::uint8_t>(37): return PositionMaintenanceRequest;
            case static_cast<std::uint8_t>(38): return PositionMaintenanceReport;
            case static_cast<std::uint8_t>(39): return AllocationInstruction;
            case static_cast<std::uint8_t>(40): return AllocationReport;
            case static_cast<std::uint8_t>(255): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum MessageType [E103]");
    }

    static const char *c_str(const MessageType::Value value)
    {
        switch (value)
        {
            case Negotiate: return "Negotiate";
            case NegotiateResponse: return "NegotiateResponse";
            case NegotiateReject: return "NegotiateReject";
            case Establish: return "Establish";
            case EstablishAck: return "EstablishAck";
            case EstablishReject: return "EstablishReject";
            case Terminate: return "Terminate";
            case NotApplied: return "NotApplied";
            case RetransmitRequest: return "RetransmitRequest";
            case Retransmission: return "Retransmission";
            case RetransmitReject: return "RetransmitReject";
            case Sequence: return "Sequence";
            case BusinessMessageReject: return "BusinessMessageReject";
            case SimpleNewOrder: return "SimpleNewOrder";
            case SimpleModifyOrder: return "SimpleModifyOrder";
            case NewOrderSingle: return "NewOrderSingle";
            case OrderCancelReplaceRequest: return "OrderCancelReplaceRequest";
            case OrderCancelRequest: return "OrderCancelRequest";
            case NewOrderCross: return "NewOrderCross";
            case ExecutionReport_New: return "ExecutionReport_New";
            case ExecutionReport_Modify: return "ExecutionReport_Modify";
            case ExecutionReport_Cancel: return "ExecutionReport_Cancel";
            case ExecutionReport_Trade: return "ExecutionReport_Trade";
            case ExecutionReport_Reject: return "ExecutionReport_Reject";
            case ExecutionReport_Forward: return "ExecutionReport_Forward";
            case SecurityDefinitionRequest: return "SecurityDefinitionRequest";
            case SecurityDefinitionResponse: return "SecurityDefinitionResponse";
            case OrderMassActionRequest: return "OrderMassActionRequest";
            case OrderMassActionReport: return "OrderMassActionReport";
            case QuoteRequest: return "QuoteRequest";
            case QuoteStatusReport: return "QuoteStatusReport";
            case Quote: return "Quote";
            case QuoteCancel: return "QuoteCancel";
            case QuoteRequestReject: return "QuoteRequestReject";
            case PositionMaintenanceCancelRequest: return "PositionMaintenanceCancelRequest";
            case PositionMaintenanceRequest: return "PositionMaintenanceRequest";
            case PositionMaintenanceReport: return "PositionMaintenanceReport";
            case AllocationInstruction: return "AllocationInstruction";
            case AllocationReport: return "AllocationReport";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum MessageType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, MessageType::Value m)
    {
        return os << MessageType::c_str(m);
    }
};

}
}
}
}

#endif
