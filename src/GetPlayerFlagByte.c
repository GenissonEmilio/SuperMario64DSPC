
/* bss 0x020a0f94..0x020a0f98 */
#pragma force_active on
unsigned char data_020a0f94[4];
#pragma force_active off

extern unsigned char data_020a1166[];
unsigned char GetPlayerFlagByte(int i, int p) {
    return *(unsigned char*)((char*)data_020a1166 + i * 0x24 + p);
}
