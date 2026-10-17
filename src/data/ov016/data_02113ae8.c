/* .data 0x02113ae8..0x02113af0 */
extern unsigned char data_ov016_02113d8c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_02113ae8[2] = {
    9, (unsigned int)&data_ov016_02113d8c
};
#pragma section forcedata end
#pragma pop
