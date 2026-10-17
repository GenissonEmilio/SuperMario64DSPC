/* .data 0x0213bb28..0x0213bb38 */
extern unsigned char data_ov006_0213b9b0[];
extern unsigned char data_ov006_0213b9d0[];
extern unsigned char data_ov006_0213b9b8[];
extern unsigned char data_ov006_0213b9e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213bb28[4] = {
    (unsigned int)&data_ov006_0213b9b0, (unsigned int)&data_ov006_0213b9d0, (unsigned int)&data_ov006_0213b9b8, (unsigned int)&data_ov006_0213b9e4
};
#pragma section forcedata end
#pragma pop
