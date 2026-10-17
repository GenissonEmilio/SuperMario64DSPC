/* .data 0x02113af0..0x02113af8 */
extern unsigned char data_ov016_02113d4c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_02113af0[2] = {
    8, (unsigned int)&data_ov016_02113d4c
};
#pragma section forcedata end
#pragma pop
