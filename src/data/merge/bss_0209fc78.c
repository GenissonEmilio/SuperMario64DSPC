 * - data_0209fc78 is a volatile macro in func_02033464 only. decl_common.h
 *   spells that byte plain, and the other functions in this file read it plain.
 * - data_0209f4a4 is s16[] in decl_common.h. func_020326ac indexes it with a
 *   byte stride, so the cast stays at that use.
 * - SetTextGlobalsVS keeps the r2/r3 temps. One expression reorders the load
 *   of *(r2 + 4) against the store of r3.
 * - Address-named helpers stay address-named.
 */

#pragma defer_codegen off
#include "types.h"
#include "decl_common.h"
#include "PlayerInput.h"
#include "Message.h"
extern "C" {
extern unsigned char data_0209fc78;
