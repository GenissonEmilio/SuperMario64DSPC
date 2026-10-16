//cpp
// @symbol _ZN8Vector3sD1Ev
/* recovered: Vector3s's destructor, and it does nothing
 *
 * This file was _ZN8Vector3sD1Ev.c -- four bytes, `bx lr`, an empty function
 * nothing claimed. It is Vector3s::~Vector3s, on the same evidence that named
 * Vector3's: daHanachan_c destroys an array of a 6-byte type with
 * __cxa_vec_cleanup(this + 0x444, 5, 6, ...), a POD array needs no cleanup at all,
 * and types.h defines Vector3s as exactly `s16 x, y, z`.
 *
 * The forcing shape below is the one Vector3's file needs too -- an explicit
 * `p->~Vector3s()` on an empty inline destructor is inlined away and emits no
 * out-of-line copy, while an ARRAY cleanup has to pass the destructor's address
 * to __cxa_vec_cleanup and therefore cannot. Never instantiated; objisolate
 * keeps the declared function and drops the rest.
 */
#include "types.h"


extern "C" {
extern char data_02096f08[];
extern char data_02097230[];
extern char data_020975d4[];
extern char data_02097950[];
extern char data_02097ca4[];
}
extern "C" {
/* data 0x0208a0e4..0x0208a0f8 */
#pragma force_active on
#pragma explicit_zero_data on
unsigned int data_0208a0e4[5] = { (unsigned int)&data_02096f08, (unsigned int)&data_02097230, (unsigned int)&data_020975d4, (unsigned int)&data_02097950, (unsigned int)&data_02097ca4 };
#pragma explicit_zero_data off
#pragma force_active off
}

struct Vector3s_ForceDestructor {
    Vector3s v[2];
    ~Vector3s_ForceDestructor();
};

Vector3s_ForceDestructor::~Vector3s_ForceDestructor()
{
}
