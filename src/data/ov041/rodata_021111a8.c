/* .rodata 0x021111a8..0x021111e0 */
extern unsigned char data_ov041_021118a8[];
extern unsigned char data_ov041_0211189c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov041_021111a8[14] = {
    0xffff, (unsigned int)&data_ov041_021118a8, 1, 1, 1, 210, 210, 0xffff,
    (unsigned int)&data_ov041_0211189c, 1, 1, 1, 0xd200d2, 1
};
#pragma section forcerodata end
