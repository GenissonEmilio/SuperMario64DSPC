/* .data 0x021114dc..0x021114f4 */
extern unsigned char data_ov051_021111a4[];
extern unsigned char data_ov051_021111a0[];
extern unsigned char data_ov051_021111c4[];
extern unsigned char data_ov051_021111a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_021114dc[6] = {
    181, (unsigned int)&data_ov051_021111a4, (unsigned int)&data_ov051_021111a0, (unsigned int)&data_ov051_021111c4, 1, (unsigned int)&data_ov051_021111a8
};
#pragma section forcedata end
#pragma pop
