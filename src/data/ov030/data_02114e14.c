/* .data 0x02114e14..0x02114e20 */
extern unsigned char data_ov030_02114df8[];
extern unsigned char data_ov030_02114e90[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02114e14[3] = {
    (unsigned int)&data_ov030_02114df8, (unsigned int)&data_ov030_02114e90, 0xdac0000
};
#pragma section forcedata end
#pragma pop
