/* .data 0x021373dc..0x021373f8 */
extern unsigned char data_ov006_02136eac[];
extern unsigned char data_ov006_02136ea4[];
extern unsigned char data_ov006_02136e94[];
extern unsigned char data_ov006_02137124[];
extern unsigned char data_ov006_021371f4[];
extern unsigned char data_ov006_02136e8c[];
extern unsigned char data_ov006_02136e5c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021373dc[7] = {
    (unsigned int)&data_ov006_02136eac, (unsigned int)&data_ov006_02136ea4, (unsigned int)&data_ov006_02136e94, (unsigned int)&data_ov006_02137124, (unsigned int)&data_ov006_021371f4, (unsigned int)&data_ov006_02136e8c, (unsigned int)&data_ov006_02136e5c
};
#pragma section forcedata end
#pragma pop
