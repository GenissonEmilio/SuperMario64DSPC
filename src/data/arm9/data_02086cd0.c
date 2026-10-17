/* .data 0x02086cd0..0x02086cd8 */
extern unsigned char func_02007fcc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086cd0[2] = {
    (unsigned int)&func_02007fcc, 0
};
#pragma section forcedata end
#pragma pop
