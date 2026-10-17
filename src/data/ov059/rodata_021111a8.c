/* .rodata 0x021111a8..0x021111e0 */
extern unsigned char data_ov059_021114dc[];
extern unsigned char data_ov059_02111500[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov059_021111a8[14] = {
    0xffff, (unsigned int)&data_ov059_021114dc, 1, 1, 1, 91, 91, 0xffff,
    (unsigned int)&data_ov059_02111500, 1, 1, 1, 0x5b005b, 0x5b005b
};
#pragma section forcerodata end
