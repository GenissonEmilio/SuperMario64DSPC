/* .rodata 0x0212b9b0..0x0212b9e8 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212b9b0[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 130, 0x820082, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 0x1040082, 0x820082
};
#pragma section forcerodata end
