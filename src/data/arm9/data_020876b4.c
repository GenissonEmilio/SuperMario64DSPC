/* .data 0x020876b4..0x020876bc */
extern unsigned char data_02088700[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020876b4[2] = {
    10, (unsigned int)&data_02088700
};
#pragma section forcedata end
#pragma pop
