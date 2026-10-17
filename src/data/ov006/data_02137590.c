/* .data 0x02137590..0x021375cc */
extern unsigned char data_ov006_02137598[];
extern unsigned char data_ov006_02137590[];
extern unsigned char data_ov006_021375b8[];
extern unsigned char data_ov006_021375b0[];
extern unsigned char data_ov006_021375a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_021375b8[8] = {
    240, 0, 240, 129, 4, 49, 255, 255
};

unsigned char data_ov006_021375b0[8] = {
    248, 0, 248, 65, 94, 48, 255, 255
};

unsigned char data_ov006_021375a8[8] = {
    248, 0, 248, 65, 30, 48, 255, 255
};

unsigned int data_ov006_021375a0[2] = {
    (unsigned int)&data_ov006_02137598, (unsigned int)&data_ov006_02137590
};

unsigned char data_ov006_02137598[8] = {
    248, 64, 240, 129, 74, 49, 255, 255
};

unsigned char data_ov006_02137590[8] = {
    248, 64, 240, 129, 10, 49, 255, 255
};

unsigned int data_ov006_021375c0[3] = {
    (unsigned int)&data_ov006_021375b8, (unsigned int)&data_ov006_021375b0, (unsigned int)&data_ov006_021375a8
};
#pragma section forcedata end
#pragma pop
