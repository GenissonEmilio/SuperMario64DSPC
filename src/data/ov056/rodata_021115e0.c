/* .rodata 0x021115e0..0x02111624 */
extern unsigned char data_ov056_02112bec[];
extern unsigned char data_ov056_02112c24[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov056_021115e0[4] = {
    1, 0, 0, 0
};

unsigned int data_ov056_021115e4[4] = {
    541, 541, 0xffff, (unsigned int)&data_ov056_02112bec
};

unsigned int data_ov056_021115f4[12] = {
    1, 1, 0x1021d, 1, 1, 0xffff, (unsigned int)&data_ov056_02112c24, 1,
    1, 1, 0x21d021d, 1
};
#pragma section forcerodata end
