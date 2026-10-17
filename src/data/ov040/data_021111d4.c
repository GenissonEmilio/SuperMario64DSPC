/* .data 0x021111d4..0x021111dc */
extern unsigned char data_ov040_02111200[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov040_021111d4[2] = {
    2, (unsigned int)&data_ov040_02111200
};
#pragma section forcedata end
#pragma pop
