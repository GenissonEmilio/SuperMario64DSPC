/* .rodata 0x02111778..0x02111794 */
extern unsigned char data_ov012_02111bc4[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov012_02111778[7] = {
    0xffff, (unsigned int)&data_ov012_02111bc4, 1, 1, 1, 91, 1
};
#pragma section forcerodata end
