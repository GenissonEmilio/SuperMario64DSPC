/* .data 0x0213ec04..0x0213ec10 */
extern unsigned char data_ov006_021375fc[];
extern unsigned char data_ov006_02137604[];
extern unsigned char data_ov006_0213760c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ec04[3] = {
    (unsigned int)&data_ov006_021375fc, (unsigned int)&data_ov006_02137604, (unsigned int)&data_ov006_0213760c
};
#pragma section forcedata end
#pragma pop
