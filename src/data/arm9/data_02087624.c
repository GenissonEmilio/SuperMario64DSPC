/* .data 0x02087624..0x0208762c */
extern unsigned char data_02088100[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087624[2] = {
    8, (unsigned int)&data_02088100
};
#pragma section forcedata end
#pragma pop
