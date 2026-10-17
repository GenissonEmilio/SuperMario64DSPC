/* .data 0x02086cf0..0x02086cf8 */
extern unsigned char func_020074e8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086cf0[2] = {
    (unsigned int)&func_020074e8, 0
};
#pragma section forcedata end
#pragma pop
