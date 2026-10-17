/* .data 0x0213e4d8..0x0213e4f8 */
extern unsigned char Slot3_State2[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_0213e4e8[8] = {
    248, 0, 248, 65, 158, 0, 255, 255
};

unsigned int pmf_Slot3_State2[2] = {
    (unsigned int)&Slot3_State2, 0
};

unsigned char data_ov006_0213e4d8[8] = {
    15, 10, 10, 5, 5, 20, 0, 0
};

unsigned char data_ov006_0213e4f0[8] = {
    248, 0, 248, 65, 94, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
