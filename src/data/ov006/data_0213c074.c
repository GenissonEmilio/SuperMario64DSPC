/* .data 0x0213c074..0x0213c084 */
extern unsigned char data_ov006_0213bff0[];
extern unsigned char data_ov006_0213c038[];
extern unsigned char data_ov006_0213c018[];
extern unsigned char data_ov006_0213bfe0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213c074[4] = {
    (unsigned int)&data_ov006_0213bff0, (unsigned int)&data_ov006_0213c038, (unsigned int)&data_ov006_0213c018, (unsigned int)&data_ov006_0213bfe0
};
#pragma section forcedata end
#pragma pop
