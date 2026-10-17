/* .rodata 0x02111bfc..0x02111c18 */
extern unsigned char data_ov035_02112064[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov035_02111bfc[7] = {
    0xffff, (unsigned int)&data_ov035_02112064, 1, 1, 1, 91, 1
};
#pragma section forcerodata end
