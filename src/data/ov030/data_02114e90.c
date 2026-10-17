/* .data 0x02114e90..0x02114ea8 */
extern unsigned char data_ov030_02114694[];
extern unsigned char data_ov030_02114690[];
extern unsigned char data_ov030_021146b4[];
extern unsigned char data_ov030_02114698[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02114e90[6] = {
    91, (unsigned int)&data_ov030_02114694, (unsigned int)&data_ov030_02114690, (unsigned int)&data_ov030_021146b4, 1, (unsigned int)&data_ov030_02114698
};
#pragma section forcedata end
#pragma pop
