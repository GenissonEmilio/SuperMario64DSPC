/* .data 0x02133e7c..0x02133e90 */
extern unsigned char data_ov006_02133e6c[];
extern unsigned char data_ov006_02133e90[];
extern unsigned char data_ov006_02133e74[];
extern unsigned char data_ov006_02133ed0[];
extern unsigned char data_ov006_02133eb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02133e7c[5] = {
    (unsigned int)&data_ov006_02133e6c, (unsigned int)&data_ov006_02133e90, (unsigned int)&data_ov006_02133e74, (unsigned int)&data_ov006_02133ed0, (unsigned int)&data_ov006_02133eb0
};
#pragma section forcedata end
#pragma pop
