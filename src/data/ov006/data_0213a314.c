/* .data 0x0213a314..0x0213a32c */
extern unsigned char data_ov006_02139f1c[];
extern unsigned char data_ov006_02139eec[];
extern unsigned char data_ov006_02139fac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213a314[6] = {
    (unsigned int)&data_ov006_02139f1c, 5, (unsigned int)&data_ov006_02139eec, 5, (unsigned int)&data_ov006_02139fac, 0
};
#pragma section forcedata end
#pragma pop
