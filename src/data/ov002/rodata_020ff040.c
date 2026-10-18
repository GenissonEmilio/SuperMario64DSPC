/* rodata 0x020ff040..0x020ff060 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov002_020ff040[4] = { 0x01010000, 0x00010001, 0x01000001, 0x00000001 };
unsigned int data_ov002_020ff050[4] = { 0x01000000, 0x00010000, 0x00000001, 0x00000000 };
#pragma section forcerodata end
