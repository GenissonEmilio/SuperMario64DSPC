/* .data 0x02139d24..0x02139d2c */
extern unsigned char data_ov006_02139d2c[];
extern unsigned char data_ov006_02139d34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02139d24[2] = {
    (unsigned int)&data_ov006_02139d2c, (unsigned int)&data_ov006_02139d34
};
#pragma section forcedata end
#pragma pop
