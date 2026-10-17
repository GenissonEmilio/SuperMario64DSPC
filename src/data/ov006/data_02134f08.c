/* .data 0x02134f08..0x02134f24 */
extern unsigned char data_ov006_02134f0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134f08[1] = {
    (unsigned int)&data_ov006_02134f0c
};

unsigned char data_ov006_02134f0c[24] = {
    224, 0, 240, 129, 20, 16, 0, 0, 0, 64, 240, 129,
    24, 16, 0, 0, 16, 64, 240, 65, 88, 16, 255, 255
};
#pragma section forcedata end
#pragma pop
