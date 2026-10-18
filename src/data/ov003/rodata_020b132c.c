/* rodata 0x020b132c..0x020b1350 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov003_020b1338[3] = { 0x00000000, 0x00001000, 0x00000000 };
unsigned int data_ov003_020b132c[3] = { 0x00000000, 0x00000000, 0x00f60000 };
#pragma explicit_zero_data on
unsigned int data_ov003_020b1344[3] = { 0x00000000, 0x00000000, 0x00000000 };
#pragma explicit_zero_data off
#pragma section forcerodata end
