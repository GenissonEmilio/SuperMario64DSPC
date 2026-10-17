/* .data 0x0213ae78..0x0213ae90 */
extern unsigned char data_ov006_0212b8dc[];
extern unsigned char data_ov006_0212b8b0[];
extern unsigned char data_ov006_0212bac8[];
extern unsigned char data_ov006_0212b9e8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ae78[6] = {
    12, (unsigned int)&data_ov006_0212b8dc, (unsigned int)&data_ov006_0212b8b0, (unsigned int)&data_ov006_0212bac8, 2, (unsigned int)&data_ov006_0212b9e8
};
#pragma section forcedata end
#pragma pop
