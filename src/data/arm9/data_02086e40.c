/* .data 0x02086e40..0x02086e48 */
extern unsigned char func_02005110[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086e40[2] = {
    (unsigned int)&func_02005110, 0
};
#pragma section forcedata end
#pragma pop
