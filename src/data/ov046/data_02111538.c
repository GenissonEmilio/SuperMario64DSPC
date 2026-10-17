/* .data 0x02111538..0x0211155c */
extern unsigned char data_ov046_021111a4[];
extern unsigned char data_ov046_021111a0[];
extern unsigned char data_ov046_021111c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov046_02111538[4] = {
    7, 255, 0, 0
};

unsigned char data_ov046_0211153c[12] = {
    6, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

unsigned int data_ov046_02111548[5] = {
    200, (unsigned int)&data_ov046_021111a4, (unsigned int)&data_ov046_021111a0, (unsigned int)&data_ov046_021111c4, 1
};
#pragma section forcedata end
#pragma pop
