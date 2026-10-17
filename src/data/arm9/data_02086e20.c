/* .data 0x02086e20..0x02086e28 */
extern unsigned char func_02008008[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e20[2] = {
    (unsigned int)&func_02008008, 0
};
#pragma section forcedata end
#pragma pop
