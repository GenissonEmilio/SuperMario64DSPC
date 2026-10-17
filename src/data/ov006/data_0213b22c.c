/* .data 0x0213b22c..0x0213b238 */
extern unsigned char data_ov006_02140590[];
extern unsigned char data_ov006_02140560[];
extern unsigned char data_ov006_02140580[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213b22c[3] = {
    (unsigned int)&data_ov006_02140590, (unsigned int)&data_ov006_02140560, (unsigned int)&data_ov006_02140580
};
#pragma section forcedata end
#pragma pop
