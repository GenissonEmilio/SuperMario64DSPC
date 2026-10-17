/* .data 0x02134a04..0x02134a08 */
extern unsigned char data_ov006_02134abc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134a04[1] = {
    (unsigned int)&data_ov006_02134abc
};
#pragma section forcedata end
#pragma pop
