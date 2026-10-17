/* .data 0x0213c7f4..0x0213c804 */
extern unsigned char data_ov006_0212e5c4[];
extern unsigned char data_ov006_0212e5f0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213c7f4[4] = {
    40, (unsigned int)&data_ov006_0212e5c4, 1, (unsigned int)&data_ov006_0212e5f0
};
#pragma section forcedata end
#pragma pop
