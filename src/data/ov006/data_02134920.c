/* .data 0x02134920..0x02134924 */
extern unsigned char data_ov006_02134948[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134920[1] = {
    (unsigned int)&data_ov006_02134948
};
#pragma section forcedata end
#pragma pop
