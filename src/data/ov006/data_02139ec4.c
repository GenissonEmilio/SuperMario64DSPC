/* .data 0x02139ec4..0x02139eec */
extern unsigned char data_ov006_02139dd4[];
extern unsigned char data_ov006_02139de4[];
extern unsigned char data_ov006_02139dc4[];
extern unsigned char data_ov006_0213a13c[];
extern unsigned char data_ov006_02139e74[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02139ec4[10] = {
    (unsigned int)&data_ov006_02139dd4, 1, (unsigned int)&data_ov006_02139de4, 3, (unsigned int)&data_ov006_02139dc4, 3, (unsigned int)&data_ov006_0213a13c, 3,
    (unsigned int)&data_ov006_02139e74, 0
};
#pragma section forcedata end
#pragma pop
