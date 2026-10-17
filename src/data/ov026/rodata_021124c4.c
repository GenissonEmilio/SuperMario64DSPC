/* .rodata 0x021124c4..0x021124e4 */
extern unsigned char data_ov026_02112e20[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov026_021124c4[4] = {
    91, 0xffff, (unsigned int)&data_ov026_02112e20, 1
};

unsigned char data_ov026_021124d4[16] = {
    1, 0, 0, 0, 1, 0, 0, 0, 91, 0, 0, 0,
    91, 0, 0, 0
};
#pragma section forcerodata end
