/* .data 0x0211155c..0x02111560 */
extern unsigned char data_ov046_021111a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov046_0211155c[1] = {
    (unsigned int)&data_ov046_021111a8
};
#pragma section forcedata end
#pragma pop
