/* .data 0x02134b4c..0x02134b54 */
extern unsigned char data_ov006_02134b44[];
extern unsigned char data_ov006_02134b3c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134b4c[2] = {
    (unsigned int)&data_ov006_02134b44, (unsigned int)&data_ov006_02134b3c
};
#pragma section forcedata end
#pragma pop
