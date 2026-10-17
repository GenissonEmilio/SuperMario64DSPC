/* .data 0x02086e10..0x02086e18 */
extern unsigned char func_02009540[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e10[2] = {
    (unsigned int)&func_02009540, 0
};
#pragma section forcedata end
#pragma pop
