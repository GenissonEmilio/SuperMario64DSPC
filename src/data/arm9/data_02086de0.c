/* .data 0x02086de0..0x02086de8 */
extern unsigned char func_020094c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086de0[2] = {
    (unsigned int)&func_020094c0, 0
};
#pragma section forcedata end
#pragma pop
