/* .rodata 0x0212b978..0x0212b9b0 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212b978[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 37, 0x250025, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 0x4a0025, 0x6f0025
};
#pragma section forcerodata end
