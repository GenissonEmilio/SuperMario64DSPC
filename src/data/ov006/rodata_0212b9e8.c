/* .rodata 0x0212b9e8..0x0212ba20 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212b9e8[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 12, 0xc000c, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 0x18000c, 0xc000c
};
#pragma section forcerodata end
