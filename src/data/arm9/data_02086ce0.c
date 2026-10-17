/* .data 0x02086ce0..0x02086ce8 */
extern unsigned char func_020050dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086ce0[2] = {
    (unsigned int)&func_020050dc, 0
};
#pragma section forcedata end
#pragma pop
