/* .data 0x021374b8..0x021374c4 */
extern unsigned char data_ov006_021374bc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021374b8[1] ;

unsigned char data_ov006_021374bc[8] = {
    224, 128, 240, 193, 24, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
