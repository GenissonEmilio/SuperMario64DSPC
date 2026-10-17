/* .rodata 0x02112958..0x02112968 */
extern unsigned char data_ov022_02113168[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov022_02112958[4] = {
    0xffff, (unsigned int)&data_ov022_02113168, 1, 1
};
#pragma section forcerodata end
