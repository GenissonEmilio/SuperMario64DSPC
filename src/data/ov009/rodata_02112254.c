/* .rodata 0x02112254..0x02112270 */
extern unsigned char data_ov009_02112b7c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov009_02112254[4] = {
    255, 255, 0, 0
};

unsigned int data_ov009_02112258[6] = {
    (unsigned int)&data_ov009_02112b7c, 1, 1, 1, 31, 31
};
#pragma section forcerodata end
