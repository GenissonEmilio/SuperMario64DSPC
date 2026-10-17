/* .data 0x020bc60c..0x020bc620 */
extern unsigned char data_ov004_020b9eb8[];
extern unsigned char data_ov004_020b9f8c[];
extern unsigned char data_ov004_020b9f38[];
extern unsigned char data_ov004_020b9ed8[];
extern unsigned char data_ov004_020b9f94[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc60c[5] = {
    (unsigned int)&data_ov004_020b9eb8, (unsigned int)&data_ov004_020b9f8c, (unsigned int)&data_ov004_020b9f38, (unsigned int)&data_ov004_020b9ed8, (unsigned int)&data_ov004_020b9f94
};
#pragma section forcedata end
#pragma pop
