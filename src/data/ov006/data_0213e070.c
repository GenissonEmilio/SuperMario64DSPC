/* .data 0x0213e070..0x0213e094 */
extern unsigned char data_ov006_0213dde4[];
extern unsigned char data_ov006_0213ddc4[];
extern unsigned char data_ov006_0213ddd4[];
extern unsigned char data_ov006_021427ac[];
extern unsigned char data_ov006_0213de7c[];
extern unsigned char data_ov006_0213de98[];
extern unsigned char data_ov006_0213deb4[];
extern unsigned char data_ov006_02142804[];
extern unsigned char data_ov006_0213de0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213e070[9] = {
    (unsigned int)&data_ov006_0213dde4, (unsigned int)&data_ov006_0213ddc4, (unsigned int)&data_ov006_0213ddd4, (unsigned int)&data_ov006_021427ac, (unsigned int)&data_ov006_0213de7c, (unsigned int)&data_ov006_0213de98, (unsigned int)&data_ov006_0213deb4, (unsigned int)&data_ov006_02142804,
    (unsigned int)&data_ov006_0213de0c
};
#pragma section forcedata end
#pragma pop
