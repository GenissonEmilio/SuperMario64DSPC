/* .data 0x021124c4..0x021124d4 */
extern unsigned char data_ov053_021111c8[];
extern unsigned char data_ov053_021111a0[];
extern unsigned char data_ov053_021113c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_021124c4[4] = {
    8, (unsigned int)&data_ov053_021111c8, (unsigned int)&data_ov053_021111a0, (unsigned int)&data_ov053_021113c0
};
#pragma section forcedata end
#pragma pop
