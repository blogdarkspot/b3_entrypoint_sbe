#ifndef __SBE_MESSAGE_HPP__
#define __SBE_MESSAGE_HPP__

#include "b3_entrypoint_fixp_sbe/MessageHeader.h"
//execution reports 
#include "b3_entrypoint_fixp_sbe/ExecutionReport_New.h" 
#include "b3_entrypoint_fixp_sbe/ExecutionReport_Cancel.h"
#include "b3_entrypoint_fixp_sbe/ExecutionReport_Trade.h"
#include "b3_entrypoint_fixp_sbe/ExecutionReport_Modify.h" 
#include "b3_entrypoint_fixp_sbe/ExecutionReport_Reject.h" 
#include "b3_entrypoint_fixp_sbe/ExecutionReport_Forward.h" 
//admin messages
//Stage Initialization
#include "b3_entrypoint_fixp_sbe/Negotiate.h"
#include "b3_entrypoint_fixp_sbe/NegotiateResponse.h"
#include "b3_entrypoint_fixp_sbe/NegotiateReject.h"
//Binding
#include "b3_entrypoint_fixp_sbe/Establish.h"
#include "b3_entrypoint_fixp_sbe/EstablishAck.h"
#include "b3_entrypoint_fixp_sbe/EstablishReject.h"
//Transferring
#include "b3_entrypoint_fixp_sbe/Sequence.h"
#include "b3_entrypoint_fixp_sbe/Retransmission.h"
#include "b3_entrypoint_fixp_sbe/RetransmitRequest.h"
#include "b3_entrypoint_fixp_sbe/RetransmitReject.h"
#include "b3_entrypoint_fixp_sbe/NotApplied.h"
//Terminate
#include "b3_entrypoint_fixp_sbe/Terminate.h"


#include <cstdint>
#include <cstring>
#include <variant>

namespace b3::protocol
{
	//auto-gen code namespace
	using namespace entrypoint::fixp;
	
	using sbe_message_body = std::variant<sbe::ExecutionReport_New,
				sbe::ExecutionReport_Trade,
				sbe::ExecutionReport_Cancel,
				sbe::ExecutionReport_Reject,
				sbe::ExecutionReport_Forward,
				sbe::ExecutionReport_Modify,
				sbe::Terminate,
				sbe::Establish,
				sbe::EstablishAck,
				sbe::EstablishReject,
				sbe::Negotiate,
				sbe::NegotiateResponse,
				sbe::NegotiateReject,
				sbe::Sequence,
				sbe::Retransmission,
				sbe::RetransmitRequest,
				sbe::RetransmitReject,
				sbe::NotApplied>;

	static sbe_message_body decoder_sbe_message_body(char* __buffer, uint16_t __offset, uint16_t __length, uint32_t __template_id)
	{
		switch(__template_id)
		{

		}
	}

	struct framing_header
	{
		framing_header(char *__buffer, std::size_t __offset, std::size_t __length) :
			_M_buffer(__buffer), _M_offset(__offset), _M_lenght(__length)
		{
		}
		void set_message_length(std::uint16_t __length)
		{
			std::memcpy(_M_buffer + _M_offset, &__length, sizeof(__length));
		}
		const std::uint16_t* get_message_length() const
		{
			return (std::uint16_t *)_M_buffer + _M_offset;
		}
		void set_enconding_type(std::uint16_t __type)
		{
			std::memcpy(_M_buffer + _M_offset + sizeof(uint16_t), &__type, sizeof(__type));	
		}
		std::uint16_t get_enconding_type() const
		{
			std::uint16_t ret = 0x00;
			std::memcpy(&ret, _M_buffer + _M_offset + sizeof(uint16_t), sizeof(ret));		
			return ret;
		}
		void set_offset(std::size_t __offset)
		{
			_M_offset = __offset;
		}
		const std::uint16_t length() const
		{
			return 0x04;
		}
		private:
		char* _M_buffer;
		std::size_t _M_offset;
		const std::size_t _M_lenght;
	};
	
	struct csbe_message
	{
		csbe_message(char *__buffer, const std::size_t __offset, const std::size_t __length) :
		_M_buffer(__buffer), _M_offset(__offset), _M_length(__length),
		_M_fh(__buffer, __offset, __length) {}

		const std::uint16_t length() const
		{
			return *_M_fh.get_message_length();
		}

		const sbe_message_body& cbody()
		{
			return _M_mb;
		}

		private:
		char* _M_buffer;	
		std::size_t _M_offset;
		const std::size_t _M_length;
		framing_header _M_fh;
		sbe::MessageHeader  _M_mh;
		sbe_message_body _M_mb;
	};

	struct sbe_message
	{
		sbe_message(char *__buffer, const std::size_t __offset, const std::size_t __length) :
		_M_buffer(__buffer), _M_offset(__offset), _M_length(__length),
		_M_fh(__buffer, __offset, __length) {}

		const std::uint16_t length() const
		{
			return *_M_fh.get_message_length();
		}
		
		sbe::MessageHeader& header()
		{
			return _M_mh;
		}

		sbe_message_body& body()
		{
			return _M_mb;
		}

		void build()
		{
			//todo set _M_fh;
		}
		
		char* data()
		{
			return _M_buffer;
		}
		
		std::uint16_t length()
		{
			return *_M_fh.get_message_length();
		}

		private:
		char* _M_buffer;	
		std::size_t _M_offset;
		const std::size_t _M_length;
		framing_header _M_fh;
		sbe::MessageHeader  _M_mh;
		sbe_message_body _M_mb;
	};
}
#endif
