/* .data 0x021375cc..0x021375e4 */
extern unsigned char data_ov006_021375d4[];
extern unsigned char data_ov006_021375cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_021375d4[8] = {
    232, 128, 240, 193, 14, 1, 255, 255
};

unsigned char data_ov006_021375cc[8] = {
    232, 128, 240, 193, 18, 17, 255, 255
};

unsigned int data_ov006_021375dc[2] = {
    (unsigned int)&data_ov006_021375d4, (unsigned int)&data_ov006_021375cc
};
#pragma section forcedata end
#pragma pop
