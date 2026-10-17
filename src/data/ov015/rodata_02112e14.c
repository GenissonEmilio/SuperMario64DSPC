/* .rodata 0x02112e14..0x02112e30 */
extern unsigned char data_ov015_02113458[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov015_02112e14[7] = {
    0xffff, (unsigned int)&data_ov015_02113458, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
