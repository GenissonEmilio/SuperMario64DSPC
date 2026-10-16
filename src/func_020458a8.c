// @symbol func_020458a8
/* recovered: shared common types */
#include "common.h"
/* func_020458a8 at 0x020458a8, size=0x38
 * Normalizes each of 3 source Vector3s into corresponding destination Vector3s.
 * NormalizeVec3(src, dst): normalizes src into dst.
 */

typedef int Fix12i;



struct Matrix3x3_Vecs {
    struct Vector3 v0;
    struct Vector3 v1;
    struct Vector3 v2;
};

extern void NormalizeVec3(const struct Vector3* src, struct Vector3* dst);

void func_020458a8(struct Matrix3x3_Vecs* dst, struct Matrix3x3_Vecs* src)
{
    NormalizeVec3(&dst->v0, &src->v0);
    NormalizeVec3(&dst->v1, &src->v1);
    NormalizeVec3(&dst->v2, &src->v2);
}

/* arm9-data-run 0x0209A414 data */
#pragma push
#pragma explicit_zero_data on
unsigned char data_0209a414[4] = {0};
unsigned char data_0209a418[4] = {
    0x25, 0x54, 0x00, 0x00,
};
unsigned char data_0209a41c[8] = {
    0x41, 0x4D, 0x7C, 0x50, 0x4D, 0x00, 0x00, 0x00,
};
unsigned char data_0209a424[8] = {
    0x54, 0xE2, 0x06, 0x02, 0x40, 0xE2, 0x06, 0x02,
};
unsigned char data_0209a42c[12] = {
    0x25, 0x6D, 0x2F, 0x25, 0x64, 0x2F, 0x25, 0x79, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop
/* end arm9-data-run 0x0209A414 */
