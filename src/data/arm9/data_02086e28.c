/* .data 0x02086e28..0x02086e30 */
extern unsigned char func_02005098[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e28[2] = {
    (unsigned int)&func_02005098, 0
};
#pragma section forcedata end
#pragma pop
