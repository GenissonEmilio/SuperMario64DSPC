/* .data 0x020876c4..0x020876cc */
extern unsigned char data_02088000[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020876c4[2] = {
    8, (unsigned int)&data_02088000
};
#pragma section forcedata end
#pragma pop
