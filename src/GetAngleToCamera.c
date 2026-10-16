
/* bss 0x020a0f44..0x020a0f48 */
#pragma force_active on
unsigned char data_020a0f44[4];
#pragma force_active off

extern short data_020a1164[];
short GetAngleToCamera(int i) {
    return *(short*)((char*)data_020a1164 + i * 0x24);
}
