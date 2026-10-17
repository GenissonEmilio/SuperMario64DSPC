/* .data 0x021137ac..0x021137b4 */
extern unsigned char data_ov020_02113ca8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021137ac[2] = {
    9, (unsigned int)&data_ov020_02113ca8
};
#pragma section forcedata end
#pragma pop
