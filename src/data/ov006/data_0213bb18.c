/* .data 0x0213bb18..0x0213bb28 */
extern unsigned char data_ov006_0213b9ac[];
extern unsigned char data_ov006_0213b9c8[];
extern unsigned char data_ov006_0213b9c4[];
extern unsigned char data_ov006_0213b9dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213bb18[4] = {
    (unsigned int)&data_ov006_0213b9ac, (unsigned int)&data_ov006_0213b9c8, (unsigned int)&data_ov006_0213b9c4, (unsigned int)&data_ov006_0213b9dc
};
#pragma section forcedata end
#pragma pop
