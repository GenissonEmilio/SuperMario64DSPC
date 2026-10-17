/* .data 0x02086e08..0x02086e10 */
extern unsigned char func_02007f14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e08[2] = {
    (unsigned int)&func_02007f14, 0
};
#pragma section forcedata end
#pragma pop
