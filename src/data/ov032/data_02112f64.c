/* .data 0x02112f64..0x02112f7c */
extern unsigned char data_ov032_021128fc[];
extern unsigned char data_ov032_021128f0[];
extern unsigned char data_ov032_02112aa4[];
extern unsigned char data_ov032_0211291c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov032_02112f64[6] = {
    91, (unsigned int)&data_ov032_021128fc, (unsigned int)&data_ov032_021128f0, (unsigned int)&data_ov032_02112aa4, 1, (unsigned int)&data_ov032_0211291c
};
#pragma section forcedata end
#pragma pop
