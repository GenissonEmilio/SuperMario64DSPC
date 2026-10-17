/* .data 0x02086cd8..0x02086ce0 */
extern unsigned char func_02007450[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086cd8[2] = {
    (unsigned int)&func_02007450, 0
};
#pragma section forcedata end
#pragma pop
