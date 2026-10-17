/* .data 0x02114e00..0x02114e08 */
extern unsigned char data_ov030_02114fac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02114e00[2] = {
    9, (unsigned int)&data_ov030_02114fac
};
#pragma section forcedata end
#pragma pop
