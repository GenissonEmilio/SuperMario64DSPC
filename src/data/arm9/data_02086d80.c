/* .data 0x02086d80..0x02086d88 */
extern unsigned char func_020084b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d80[2] = {
    (unsigned int)&func_020084b0, 0
};
#pragma section forcedata end
#pragma pop
