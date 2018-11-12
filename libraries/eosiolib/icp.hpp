#pragma once

#include <eosiolib/eosio.hpp>

namespace eosio {

   enum class receipt_status : uint8_t {
      unknown = 0,
      executed = 1,
      expired = 2
      // failed = 3
   };

   struct icp_sendaction {
      uint64_t seq;
      bytes send_action;
      uint32_t expiration;
      bytes receipt_action;
   };

}
