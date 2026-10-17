/* .data 0x02086dc0..0x02086dc8 */
extern unsigned char func_02007b0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086dc0[2] = {
    (unsigned int)&func_02007b0c, 0
};
#pragma section forcedata end
#pragma pop
