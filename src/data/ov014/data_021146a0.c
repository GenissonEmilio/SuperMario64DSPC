/* .data 0x021146a0..0x021146a8 */
extern unsigned char func_ov014_02111af0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov014_021146a0[2] = {
    (unsigned int)&func_ov014_02111af0, 0
};
#pragma section forcedata end
#pragma pop
