/* .data 0x021342bc..0x021342f0 */
extern unsigned char data_ov006_02134340[];
extern unsigned char data_ov006_021342d0[];
extern unsigned char data_ov006_021342f0[];
extern unsigned char data_ov006_02134310[];
extern unsigned char data_ov006_02134370[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021342bc[5] = {
    (unsigned int)&data_ov006_02134340, (unsigned int)&data_ov006_021342d0, (unsigned int)&data_ov006_021342f0, (unsigned int)&data_ov006_02134310, (unsigned int)&data_ov006_02134370
};

unsigned char data_ov006_021342d0[32] = {
    248, 64, 231, 1, 151, 16, 0, 0, 248, 0, 247, 1,
    153, 16, 0, 0, 248, 64, 9, 16, 151, 16, 0, 0,
    248, 0, 1, 16, 153, 16, 255, 255
};
#pragma section forcedata end
#pragma pop
