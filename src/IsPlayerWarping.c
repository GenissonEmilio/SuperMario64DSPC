
/* bss 0x0209d6a8..0x0209d6ac */
#pragma force_active on
unsigned char data_0209d6a8[4];
#pragma force_active off

extern int GetPlayerFlagByte(int a0, int a1);
unsigned char IsPlayerWarping(int a0)
{
    return (GetPlayerFlagByte(a0, 0) & 0x70) >> 4;
}
