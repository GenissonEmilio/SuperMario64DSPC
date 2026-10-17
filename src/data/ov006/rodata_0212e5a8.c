/* .rodata 0x0212e5a8..0x0212e5c4 */
extern unsigned char data_ov006_0213c75c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212e5a8[7] = {
    0xffff, (unsigned int)&data_ov006_0213c75c, 1, 1, 1, 120, 1
};
#pragma section forcerodata end
