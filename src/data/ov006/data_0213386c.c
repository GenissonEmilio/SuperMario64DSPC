/* .data 0x0213386c..0x02133890 */
extern unsigned char data_ov006_02133870[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213386c[1] = {
    (unsigned int)&data_ov006_02133870
};

unsigned char data_ov006_02133870[32] = {
    0, 0, 8, 128, 144, 16, 0, 0, 1, 64, 216, 145,
    144, 16, 0, 0, 17, 64, 216, 129, 208, 16, 0, 0,
    238, 64, 224, 193, 152, 48, 255, 255
};
#pragma section forcedata end
#pragma pop
