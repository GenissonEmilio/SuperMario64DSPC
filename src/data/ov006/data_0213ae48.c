/* .data 0x0213ae48..0x0213ae60 */
extern unsigned char data_ov006_0212b8e0[];
extern unsigned char data_ov006_0212b8ac[];
extern unsigned char data_ov006_0212c3cc[];
extern unsigned char data_ov006_0212b9b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ae48[6] = {
    130, (unsigned int)&data_ov006_0212b8e0, (unsigned int)&data_ov006_0212b8ac, (unsigned int)&data_ov006_0212c3cc, 2, (unsigned int)&data_ov006_0212b9b0
};
#pragma section forcedata end
#pragma pop
