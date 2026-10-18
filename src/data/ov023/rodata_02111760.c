/* rodata 0x02111760..0x02111768 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
#pragma explicit_zero_data on
unsigned int data_ov023_02111760[1] = { 0x00000000 };
#pragma explicit_zero_data off
unsigned int data_ov023_02111764[1] = { 0x00001000 };
#pragma section forcerodata end
