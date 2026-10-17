/* .data 0x0213ae00..0x0213ae18 */
extern unsigned char data_ov006_0212b8e8[];
extern unsigned char data_ov006_0212b8bc[];
extern unsigned char data_ov006_0212bc74[];
extern unsigned char data_ov006_0212b940[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ae00[6] = {
    30, (unsigned int)&data_ov006_0212b8e8, (unsigned int)&data_ov006_0212b8bc, (unsigned int)&data_ov006_0212bc74, 2, (unsigned int)&data_ov006_0212b940
};
#pragma section forcedata end
#pragma pop
