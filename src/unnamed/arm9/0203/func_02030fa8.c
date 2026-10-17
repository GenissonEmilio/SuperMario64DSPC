unsigned char data_0209f290;
static unsigned char data_0209f290_pad[3];

/* bss 0x0209fc7c..0x0209fc80 */
#pragma force_active on
unsigned char data_0209fc7c[4];
#pragma force_active off

typedef int s32;

extern s32 GetOwnerLanguage(void);

s32 func_02030fa8(void)
{
    s32 lang = GetOwnerLanguage();
    switch (lang)
    {
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 5:
        return 4;
    default:
        return 0;
    }
}

extern unsigned char data_0209fc84;
/* arm9-data-run 0x02098B58 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_02098b58[36] ;
extern unsigned int data_02098be8[44] = {
    0x418500F8, 0x00000098, 0x419200F8, 0x0000009A, 0x419C00F8, 0x0000009C, 0x41A400F8, 0x0000009E,
    0x41AE00F7, 0x0000009C, 0x41B700F8, 0x000000D8, 0x41C200F8, 0x000000DA, 0x41D200F8, 0x000000DC,
    0x41DE00F8, 0x000000DE, 0x41EA00F8, 0x00000118, 0x41FB00F8, 0x000000DE, 0x400700F8, 0x0000011A,
    0x401300F8, 0x0000011A, 0x401F00F8, 0x000000DE, 0x402B00F8, 0x000000D8, 0x403600F8, 0x0000011C,
    0x404200F8, 0x000000D8, 0x404D00F8, 0x0000009E, 0x405800F8, 0x0000011E, 0x006580F8, 0x0000015F,
    0x006B80F8, 0x0000015F, 0x007180F8, 0xFFFF015F,
#pragma pop
/* end arm9-data-run 0x02098B58 */
