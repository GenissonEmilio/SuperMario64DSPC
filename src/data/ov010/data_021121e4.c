/* .data 0x021121e4..0x021121ec */
extern unsigned char data_ov010_02112398[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121e4[2] = {
    0x400, (unsigned int)&data_ov010_02112398
};
#pragma section forcedata end
#pragma pop
