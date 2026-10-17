/* .data 0x02113778..0x02113780 */
extern unsigned char data_ov021_0211387c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113778[2] = {
    3, (unsigned int)&data_ov021_0211387c
};
#pragma section forcedata end
#pragma pop
