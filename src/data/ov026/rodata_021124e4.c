/* .rodata 0x021124e4..0x021124f8 */
extern unsigned char data_ov026_02112dd0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov026_021124e4[2] = {
    0xffff, (unsigned int)&data_ov026_02112dd0
};

unsigned char data_ov026_021124ec[12] = {
    1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0
};
#pragma section forcerodata end
