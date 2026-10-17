/* .rodata 0x0211251c..0x02112554 */
extern unsigned char data_ov026_02112e50[];
extern unsigned char data_ov026_02112e30[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov026_0211251c[5] = {
    0xffff, (unsigned int)&data_ov026_02112e50, 1, 1, 1
};

extern unsigned int data_ov026_02112530[9] ;
#pragma section forcerodata end
