/* .data 0x0213a35c..0x0213a380 */
extern unsigned char data_ov006_0213a360[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213a35c[1] = {
    (unsigned int)&data_ov006_0213a360
};

unsigned char data_ov006_0213a360[12] = {
    236, 128, 244, 129, 23, 0, 0, 0, 236, 128, 4, 64
};

unsigned char data_ov006_0213a36c[20] = {
    25, 0, 0, 0, 12, 64, 244, 1, 26, 0, 0, 0,
    12, 0, 4, 0, 28, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
