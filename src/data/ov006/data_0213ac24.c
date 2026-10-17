/* .data 0x0213ac24..0x0213ac30 */
extern unsigned char data_ov006_0213ac28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213ac24[1] ;

unsigned char data_ov006_0213ac28[8] = {
    0, 128, 232, 193, 28, 33, 255, 255
};
#pragma section forcedata end
#pragma pop
