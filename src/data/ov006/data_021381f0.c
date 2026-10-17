/* .data 0x021381f0..0x02138200 */
extern unsigned char data_ov006_02138230[];
extern unsigned char data_ov006_02138218[];
extern unsigned char data_ov006_02138200[];
extern unsigned char data_ov006_02138248[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021381f0[4] = {
    (unsigned int)&data_ov006_02138230, (unsigned int)&data_ov006_02138218, (unsigned int)&data_ov006_02138200, (unsigned int)&data_ov006_02138248
};
#pragma section forcedata end
#pragma pop
