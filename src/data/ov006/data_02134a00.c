/* .data 0x02134a00..0x02134a04 */
extern unsigned char data_ov006_02134a84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134a00[1] = {
    (unsigned int)&data_ov006_02134a84
};
#pragma section forcedata end
#pragma pop
