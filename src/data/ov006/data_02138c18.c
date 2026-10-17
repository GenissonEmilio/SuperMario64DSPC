/* .data 0x02138c18..0x02138c3c */
extern unsigned char data_ov006_02138c1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138c18[1] = {
    (unsigned int)&data_ov006_02138c1c
};

unsigned char data_ov006_02138c1c[32] = {
    236, 0, 232, 129, 0, 0, 0, 0, 236, 128, 8, 144,
    0, 0, 0, 0, 12, 64, 232, 65, 4, 0, 0, 0,
    12, 64, 8, 0, 36, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
