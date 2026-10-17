/* .data 0x02086d88..0x02086d90 */
extern unsigned char func_020078c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d88[2] = {
    (unsigned int)&func_020078c4, 0
};
#pragma section forcedata end
#pragma pop
