/* .rodata 0x0212ba58..0x0212ba90 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212ba58[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 1, 0x10001, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 1, 0x10001
};
#pragma section forcerodata end
