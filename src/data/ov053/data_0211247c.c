/* .data 0x0211247c..0x02112494 */
extern unsigned char data_ov053_021124dc[];
extern unsigned char data_ov053_02112380[];
extern unsigned char data_ov053_021123e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_0211247c[6] = {
    516, (unsigned int)&data_ov053_021124dc, 267, (unsigned int)&data_ov053_02112380, 257, (unsigned int)&data_ov053_021123e4
};
#pragma section forcedata end
#pragma pop
