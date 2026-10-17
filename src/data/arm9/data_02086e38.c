/* .data 0x02086e38..0x02086e40 */
extern unsigned char func_02008028[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e38[2] = {
    (unsigned int)&func_02008028, 0
};
#pragma section forcedata end
#pragma pop
