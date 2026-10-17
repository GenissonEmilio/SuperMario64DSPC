/* .rodata 0x02111928..0x02111944 */
extern unsigned char data_ov024_021128d8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov024_02111928[4] = {
    105, 1, 1, 0
};

unsigned int data_ov024_0211192c[6] = {
    0xffff, (unsigned int)&data_ov024_021128d8, 1, 1, 1, 0x16a0169
};
#pragma section forcerodata end
