/* data 0x02111b48..0x02111b60 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov023_02111b48[3] = { 0x02111b28, 0x02111b70, 0x1c200000 };
unsigned int data_ov023_02111b54[3] = { 0xff0e0000, 0x000e7fff, 0x7fffff0b };
#pragma section forcedata end
