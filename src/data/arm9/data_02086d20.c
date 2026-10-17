/* .data 0x02086d20..0x02086d28 */
extern unsigned char func_020075b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d20[2] = {
    (unsigned int)&func_020075b4, 0
};
#pragma section forcedata end
#pragma pop
