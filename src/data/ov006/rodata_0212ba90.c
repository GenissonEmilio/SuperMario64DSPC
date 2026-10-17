/* .rodata 0x0212ba90..0x0212bac8 */
extern unsigned char data_ov006_0213ade8[];
extern unsigned char data_ov006_0213add8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212ba90[14] = {
    0xffff, (unsigned int)&data_ov006_0213ade8, 1, 1, 1, 58, 0x3a003a, 0xffff,
    (unsigned int)&data_ov006_0213add8, 1, 1, 1, 0x74003a, 0xae003a
};
#pragma section forcerodata end
