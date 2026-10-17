/* .data 0x020875e4..0x020875ec */
extern unsigned char data_02087c68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020875e4[2] = {
    7, (unsigned int)&data_02087c68
};
#pragma section forcedata end
#pragma pop
