/* .data 0x020875c4..0x020875cc */
extern unsigned char data_02088840[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020875c4[2] = {
    11, (unsigned int)&data_02088840
};
#pragma section forcedata end
#pragma pop
