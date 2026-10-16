
/* bss 0x020a0f28..0x020a0f2c */
#pragma force_active on
unsigned char data_020a0f28[4];
#pragma force_active off

struct E19 { unsigned short h; char _rest[0x24 - 2]; };
extern struct E19 data_020a1164[];
void func_0203db0c(int idx, unsigned short val) {
    data_020a1164[idx].h = val;
}
