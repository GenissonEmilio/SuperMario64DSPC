/* .rodata 0x0211251c..0x02112554 */
extern unsigned char data_ov026_02112e50[];
extern unsigned char data_ov026_02112e30[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov026_0211251c[5] = {
    0xffff, (unsigned int)&data_ov026_02112e50, 1, 1, 1
};

unsigned int data_ov026_02112530[9] = {
    91, 1, 0xffff, (unsigned int)&data_ov026_02112e30, 1, 1, 0x10001, 0x5b005b,
    0xb6005b
};
#pragma section forcerodata end
