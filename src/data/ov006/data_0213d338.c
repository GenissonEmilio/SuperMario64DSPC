/* .data 0x0213d338..0x0213d344 */
extern unsigned char data_ov006_0213d384[];
extern unsigned char data_ov006_0213d3c4[];
extern unsigned char data_ov006_0213d40c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213d338[3] = {
    (unsigned int)&data_ov006_0213d384, (unsigned int)&data_ov006_0213d3c4, (unsigned int)&data_ov006_0213d40c
};
#pragma section forcedata end
#pragma pop
