/* .rodata 0x021111e0..0x021111ec */
extern unsigned char data_ov053_02112394[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_021111e0[3] = {
    0xffff, (unsigned int)&data_ov053_02112394, 1
};
#pragma section forcerodata end
