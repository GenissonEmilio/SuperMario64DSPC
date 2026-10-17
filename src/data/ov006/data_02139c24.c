/* .data 0x02139c24..0x02139c38 */
extern unsigned char data_ov006_02139c28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02139c24[1] = {
    (unsigned int)&data_ov006_02139c28
};

unsigned char data_ov006_02139c28[16] = {
    248, 64, 240, 129, 224, 16, 0, 0, 2, 64, 240, 65,
    32, 17, 255, 255
};
#pragma section forcedata end
#pragma pop
