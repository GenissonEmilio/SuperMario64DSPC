/* .data 0x0211387c..0x0211388c */
extern unsigned char data_ov020_02113f10[];
extern unsigned char data_ov020_02113b68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_0211387c[4] = {
    0x500, (unsigned int)&data_ov020_02113f10, 0x605, (unsigned int)&data_ov020_02113b68
};
#pragma section forcedata end
#pragma pop
