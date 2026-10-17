/* .rodata 0x0212e094..0x0212e0b0 */
extern unsigned char data_ov006_0213b314[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212e094[7] = {
    0xffff, (unsigned int)&data_ov006_0213b314, 1, 1, 1, 30, 1
};
#pragma section forcerodata end
