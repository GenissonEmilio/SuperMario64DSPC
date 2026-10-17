/* .data 0x02137994..0x021379ac */
extern unsigned char data_ov006_0213799c[];
extern unsigned char data_ov006_021379ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137998[1] = {
    (unsigned int)&data_ov006_0213799c
};

unsigned int data_ov006_02137994[1] = {
    (unsigned int)&data_ov006_021379ac
};

unsigned char data_ov006_0213799c[16] = {
    248, 68, 236, 129, 218, 17, 0, 0, 248, 132, 12, 0,
    222, 17, 255, 255
};
#pragma section forcedata end
#pragma pop
