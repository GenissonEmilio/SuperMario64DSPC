/* .data 0x02133f24..0x02133f38 */
extern unsigned char data_ov006_02133f80[];
extern unsigned char data_ov006_02133f68[];
extern unsigned char data_ov006_02133f50[];
extern unsigned char data_ov006_02133f38[];
extern unsigned char data_ov006_02133f98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02133f24[5] = {
    (unsigned int)&data_ov006_02133f80, (unsigned int)&data_ov006_02133f68, (unsigned int)&data_ov006_02133f50, (unsigned int)&data_ov006_02133f38, (unsigned int)&data_ov006_02133f98
};
#pragma section forcedata end
#pragma pop
