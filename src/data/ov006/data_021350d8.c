/* .data 0x021350d8..0x02135128 */
extern unsigned char data_ov006_021350dc[];
extern unsigned char data_ov006_02135268[];
extern unsigned char data_ov006_021354f8[];
extern unsigned char data_ov006_02135798[];
extern unsigned char data_ov006_02135ba8[];
extern unsigned char data_ov006_02135128[];
extern unsigned char data_ov006_02135648[];
extern unsigned char data_ov006_021353a8[];
extern unsigned char data_ov006_02135a48[];
extern unsigned char data_ov006_02135d08[];
extern unsigned char data_ov006_021358e8[];
extern unsigned char data_ov006_02135e68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021350d8[1] = {
    (unsigned int)&data_ov006_021350dc
};

unsigned char data_ov006_021350dc[32] = {
    192, 0, 192, 193, 24, 0, 0, 0, 192, 0, 0, 208,
    24, 0, 0, 0, 0, 0, 192, 225, 24, 0, 0, 0,
    0, 0, 0, 240, 24, 0, 255, 255
};

unsigned int data_ov006_021350fc[11] = {
    (unsigned int)&data_ov006_02135268, (unsigned int)&data_ov006_021354f8, (unsigned int)&data_ov006_02135798, (unsigned int)&data_ov006_02135ba8, (unsigned int)&data_ov006_02135128, (unsigned int)&data_ov006_02135648, (unsigned int)&data_ov006_021353a8, (unsigned int)&data_ov006_02135a48,
    (unsigned int)&data_ov006_02135d08, (unsigned int)&data_ov006_021358e8, (unsigned int)&data_ov006_02135e68
};
#pragma section forcedata end
#pragma pop
