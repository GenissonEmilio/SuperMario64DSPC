/* .data 0x0211388c..0x0211389c */
extern unsigned char data_ov020_021143d8[];
extern unsigned char data_ov020_02113b18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_0211388c[4] = {
    0x1300, (unsigned int)&data_ov020_021143d8, 0x505, (unsigned int)&data_ov020_02113b18
};
#pragma section forcedata end
#pragma pop
