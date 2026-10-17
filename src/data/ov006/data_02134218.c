/* .data 0x02134218..0x02134224 */
extern unsigned char data_ov006_02134274[];
extern unsigned char data_ov006_02134224[];
extern unsigned char data_ov006_02134200[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134218[3] = {
    (unsigned int)&data_ov006_02134274, (unsigned int)&data_ov006_02134224, (unsigned int)&data_ov006_02134200
};
#pragma section forcedata end
#pragma pop
