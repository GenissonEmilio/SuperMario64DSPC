/* .data 0x02113b7c..0x02113b80 */
extern unsigned char data_ov016_02113550[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_02113b7c[1] = {
    (unsigned int)&data_ov016_02113550
};
#pragma section forcedata end
#pragma pop
