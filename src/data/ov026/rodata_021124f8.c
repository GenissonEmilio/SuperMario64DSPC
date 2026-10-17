/* .rodata 0x021124f8..0x0211251c */
extern unsigned char data_ov026_02112de8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov026_021124f8[4] = {
    30, 0, 0, 0
};

unsigned int data_ov026_021124fc[8] = {
    1, 0xffff, (unsigned int)&data_ov026_02112de8, 1, 0x10001, 1, 30, 1
};
#pragma section forcerodata end
