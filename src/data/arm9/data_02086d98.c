/* .data 0x02086d98..0x02086da0 */
extern unsigned char func_020082a0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d98[2] = {
    (unsigned int)&func_020082a0, 0
};
#pragma section forcedata end
#pragma pop
