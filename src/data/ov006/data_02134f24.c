/* .data 0x02134f24..0x02134f30 */
extern unsigned char data_ov006_02134f28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02134f24[1] ;

unsigned char data_ov006_02134f28[8] = {
    240, 0, 240, 129, 28, 16, 255, 255
};
#pragma section forcedata end
#pragma pop
