/* .data 0x02134914..0x02134918 */
extern unsigned char data_ov006_02134968[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134914[1] = {
    (unsigned int)&data_ov006_02134968
};
#pragma section forcedata end
#pragma pop
