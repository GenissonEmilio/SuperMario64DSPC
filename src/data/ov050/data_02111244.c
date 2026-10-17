/* .data 0x02111244..0x021112a0 */
extern unsigned char data_ov050_021112d8[];
extern unsigned char data_ov050_02111270[];
extern unsigned char data_ov050_02111570[];
extern unsigned char data_ov050_02111488[];
extern unsigned char data_ov050_02111378[];
extern unsigned char data_ov050_021113f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov050_02111244[1] = {
    (unsigned int)&data_ov050_021112d8
};

unsigned int data_ov050_02111248[10] = {
    768, (unsigned int)&data_ov050_02111270, 0x2e20, (unsigned int)&data_ov050_02111570, 0x1d25, (unsigned int)&data_ov050_02111488, 0x840, (unsigned int)&data_ov050_02111378,
    0x1245, (unsigned int)&data_ov050_021113f8
};

unsigned char data_ov050_02111270[48] = {
    243, 0, 144, 1, 0, 0, 144, 1, 0, 0, 0, 0,
    0, 0, 149, 1, 13, 0, 232, 3, 0, 0, 34, 11,
    0, 0, 0, 128, 0, 0, 64, 1, 13, 0, 222, 244,
    0, 0, 232, 3, 0, 0, 0, 64, 0, 0, 64, 0
};
#pragma section forcedata end
#pragma pop
