/* .data 0x02086e18..0x02086e20 */
extern unsigned char func_020095c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e18[2] = {
    (unsigned int)&func_020095c4, 0
};
#pragma section forcedata end
#pragma pop
