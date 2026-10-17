/* .data 0x02137a6c..0x02137a78 */
extern unsigned char data_ov006_02137a70[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137a6c[1] = {
    (unsigned int)&data_ov006_02137a70
};

unsigned char data_ov006_02137a70[8] = {
    248, 0, 248, 65, 214, 49, 255, 255
};
#pragma section forcedata end
#pragma pop
