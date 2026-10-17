/* .data 0x0213e320..0x0213e334 */
extern unsigned char data_ov006_021373a4[];
extern unsigned char data_ov006_021373fc[];
extern unsigned char data_ov006_0213734c[];
extern unsigned char data_ov006_021372f4[];
extern unsigned char data_ov006_02137454[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213e320[5] = {
    (unsigned int)&data_ov006_021373a4, (unsigned int)&data_ov006_021373fc, (unsigned int)&data_ov006_0213734c, (unsigned int)&data_ov006_021372f4, (unsigned int)&data_ov006_02137454
};
#pragma section forcedata end
#pragma pop
