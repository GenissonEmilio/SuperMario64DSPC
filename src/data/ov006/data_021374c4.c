/* .data 0x021374c4..0x021374c8 */
extern unsigned char data_ov006_021374c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021374c4[1] = {
    (unsigned int)&data_ov006_021374c8
};
#pragma section forcedata end
#pragma pop
