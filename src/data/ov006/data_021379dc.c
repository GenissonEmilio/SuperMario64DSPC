/* .data 0x021379dc..0x021379e8 */
extern unsigned char data_ov006_021379e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021379dc[1] ;

unsigned char data_ov006_021379e0[8] = {
    240, 0, 240, 129, 8, 33, 255, 255
};
#pragma section forcedata end
#pragma pop
