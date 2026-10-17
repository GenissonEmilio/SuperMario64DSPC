/* .data 0x0213ae60..0x0213ae78 */
extern unsigned char data_ov006_0212b8d4[];
extern unsigned char data_ov006_0212b8b8[];
extern unsigned char data_ov006_0212bb58[];
extern unsigned char data_ov006_0212ba20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ae60[6] = {
    70, (unsigned int)&data_ov006_0212b8d4, (unsigned int)&data_ov006_0212b8b8, (unsigned int)&data_ov006_0212bb58, 2, (unsigned int)&data_ov006_0212ba20
};
#pragma section forcedata end
#pragma pop
