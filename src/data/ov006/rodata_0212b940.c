/* .rodata 0x0212b940..0x0212b978 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212b940[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 30, 0x1e001e, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 0x3c001e, 0x1e001e
};
#pragma section forcerodata end
