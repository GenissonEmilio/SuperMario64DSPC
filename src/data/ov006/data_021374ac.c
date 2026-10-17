/* .data 0x021374ac..0x021374b8 */
extern unsigned char data_ov006_021374b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021374ac[1] ;

unsigned char data_ov006_021374b0[8] = {
    224, 128, 240, 193, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
