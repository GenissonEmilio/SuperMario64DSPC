/* .data 0x02111210..0x02111244 */
extern unsigned char data_ov050_021111ec[];
extern unsigned char data_ov050_021111d4[];
extern unsigned char data_ov050_021111e0[];
extern unsigned char data_ov050_021112a0[];
extern unsigned char data_ov050_021111c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov050_02111220[2] = {
    0x402, (unsigned int)&data_ov050_021111ec
};

unsigned char data_ov050_02111218[8] = {
    1, 0, 32, 3, 31, 0, 0, 0
};

unsigned int data_ov050_02111210[2] = {
    0x94049403U, (unsigned int)&data_ov050_021111d4
};

unsigned int data_ov050_02111228[7] = {
    515, (unsigned int)&data_ov050_021111e0, 0x404, (unsigned int)&data_ov050_021112a0, 267, (unsigned int)&data_ov050_021111c0, 0x401
};
#pragma section forcedata end
#pragma pop
