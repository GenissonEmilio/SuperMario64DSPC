/* .data 0x02137a48..0x02137a6c */
extern unsigned char data_ov006_02137a58[];
extern unsigned char data_ov006_02137a50[];
extern unsigned char data_ov006_02137a48[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02137a58[8] = {
    240, 0, 240, 129, 8, 112, 255, 255
};

unsigned char data_ov006_02137a50[8] = {
    248, 0, 248, 65, 194, 112, 255, 255
};

unsigned char data_ov006_02137a48[8] = {
    248, 0, 248, 65, 24, 113, 255, 255
};

unsigned int data_ov006_02137a60[3] = {
    (unsigned int)&data_ov006_02137a58, (unsigned int)&data_ov006_02137a50, (unsigned int)&data_ov006_02137a48
};
#pragma section forcedata end
#pragma pop
