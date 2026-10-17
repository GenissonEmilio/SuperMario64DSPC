/* .data 0x0213ac3c..0x0213ac48 */
extern unsigned char data_ov006_0213ac40[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ac3c[1] = {
    (unsigned int)&data_ov006_0213ac40
};

unsigned char data_ov006_0213ac40[8] = {
    240, 0, 240, 129, 116, 80, 255, 255
};
#pragma section forcedata end
#pragma pop
