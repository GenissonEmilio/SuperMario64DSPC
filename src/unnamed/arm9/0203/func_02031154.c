unsigned char data_0209f2d0;
static unsigned char data_0209f2d0_pad[3];

#include "types.h"
extern void func_02031b84(int c);

struct S { u8 b[8]; };
extern struct S *data_0209fd0c;
extern u8 data_0209fcbc;
extern extern u8 data_0209fc80;

extern u8 data_0209fcd0;
extern u8 data_0209fcd8;
extern u8 data_0209fcf4[4];

extern u8 data_0209fca4;

void func_02031154(void) {
    struct S *p = data_0209fd0c;
    u16 v = p->b[4] | (p->b[3] << 8);
    u8 idx;
    switch (v) {
    case 0:
        data_0209fc80 = data_0209fcbc;
        break;
    case 1:
        idx = data_0209fcd0;
        data_0209fcd0 = idx + 1;
        data_0209fcf4[idx] = data_0209fcd8;
        func_02031b84(0x4d);
        data_0209fca4 = 1;
        break;
    case 2:
        idx = data_0209fcd0;
        data_0209fcd0 = idx + 1;
        data_0209fcf4[idx] = data_0209fcbc;
        func_02031b84(0x4d);
        data_0209fca4 = 2;
        break;
    case 3:
        idx = data_0209fcd0;
        data_0209fcd0 = idx + 1;
        data_0209fcf4[idx] = data_0209fcbc;
        func_02031b84(0x4d);
        data_0209fca4 = 3;
        break;
    }
}

u8 data_0209fc80;
/* arm9-data-run 0x02098DD8 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_02098dd8[34] ;
extern unsigned int data_02098e60[38] = {
    0x41C000C0, 0x00000000, 0x41CF00C0, 0x00000002, 0x01DE80C0, 0x00000004, 0x41E700C0, 0x00000005,
    0x41F400C0, 0x00000007, 0x400B00C0, 0x00000009, 0x001B80C0, 0x00000004, 0x402400C0, 0x0000000B,
    0x403200C0, 0x0000000D, 0x41C200E0, 0x0000000F, 0x41D100E0, 0x00000005, 0x41DE00E0, 0x00000007,
    0x41EC00E0, 0x00000013, 0x41FA00E0, 0x00000015, 0x400800E0, 0x00000005, 0x401500E0, 0x00000017,
    0x002380E0, 0x0000001F, 0x002C80E0, 0x0000001F, 0x003580E0, 0xFFFF001F,
unsigned int data_02098ef8[42] = {
    0x418900F8, 0x00000098, 0x419300F8, 0x0000009A, 0x41A600F8, 0x0000009C, 0x41B000F8, 0x0000009E,
    0x41BB00F8, 0x0000009E, 0x41C600F8, 0x000000D8, 0x41D200F8, 0x000000DA, 0x41DF00F8, 0x0000009C,
    0x41F100F8, 0x000000DC, 0x41FA00F8, 0x00000098, 0x400A00F8, 0x000000DA, 0x401600F8, 0x000000DE,
    0x401F00F8, 0x00000098, 0x402900F8, 0x000000DC, 0x403500F8, 0x0000009C, 0x404000F8, 0x0000009A,
    0x404B00F8, 0x0000009E, 0x405400F8, 0x00000098, 0x005F80F8, 0x0000015F, 0x006580F8, 0x0000015F,
    0x006B80F8, 0xFFFF015F,
unsigned int data_02098fa0[50] = {
    0x41B500C0, 0x00000000, 0x41C300C0, 0x00000002, 0x41D100C0, 0x00000004, 0x01DF80C0, 0x00000006,
    0x41E800C0, 0x00000000, 0x41F600C0, 0x00000002, 0x400400C0, 0x00000007, 0x401400C0, 0x00000009,
    0x402100C0, 0x0000000B, 0x402F00C0, 0x0000000D, 0x403D00C0, 0x0000000F, 0x41A500E0, 0x00000011,
    0x41B300E0, 0x00000002, 0x41C100E0, 0x0000000D, 0x01CF80E0, 0x00000006, 0x41E200E0, 0x00000011,
    0x01F080E0, 0x00000006, 0x400200E0, 0x00000013, 0x001180E0, 0x00000006, 0x401A00E0, 0x0000000F,
    0x402900E0, 0x00000000, 0x403700E0, 0x0000000F, 0x004680E0, 0x0000001F, 0x004F80E0, 0x0000001F,
    0x005880E0, 0xFFFF001F,
#pragma pop
/* end arm9-data-run 0x02098DD8 */
