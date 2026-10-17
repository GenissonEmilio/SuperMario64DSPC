/* .data 0x0213a32c..0x0213a338 */
extern unsigned char data_ov006_0213a330[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213a32c[1] ;

unsigned char data_ov006_0213a330[8] = {
    240, 0, 240, 129, 19, 64, 255, 255
};
#pragma section forcedata end
#pragma pop
