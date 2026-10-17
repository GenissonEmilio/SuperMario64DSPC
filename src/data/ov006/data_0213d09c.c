/* .data 0x0213d09c..0x0213d0a8 */
extern unsigned char data_ov006_0213d0d8[];
extern unsigned char data_ov006_0213d108[];
extern unsigned char data_ov006_0213d138[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213d09c[3] = {
    (unsigned int)&data_ov006_0213d0d8, (unsigned int)&data_ov006_0213d108, (unsigned int)&data_ov006_0213d138
};
#pragma section forcedata end
#pragma pop
