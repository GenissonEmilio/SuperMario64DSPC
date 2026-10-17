/* .data 0x02134fd0..0x02134fe8 */
extern unsigned char data_ov006_02134ff8[];
extern unsigned char data_ov006_02134fe8[];
extern unsigned char data_ov006_02135008[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02134fd0[12] = {
    29, 1, 0, 0, 248, 0, 72, 0, 29, 1, 255, 255
};

unsigned int data_ov006_02134fdc[3] = {
    (unsigned int)&data_ov006_02134ff8, (unsigned int)&data_ov006_02134fe8, (unsigned int)&data_ov006_02135008
};
#pragma section forcedata end
#pragma pop
