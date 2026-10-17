/* .data 0x02114ea8..0x02114ec4 */
extern unsigned char data_ov030_0211510c[];
extern unsigned char data_ov030_02114e00[];
extern unsigned char data_ov030_02114e14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02114ea8[7] = {
    (unsigned int)&data_ov030_0211510c, (unsigned int)&data_ov030_02114e00, 0x7500752, 0x7540753, (unsigned int)&data_ov030_02114e14, 0x6400001, 31
};
#pragma section forcedata end
#pragma pop
