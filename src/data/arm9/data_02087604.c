/* .data 0x02087604..0x0208760c */
extern unsigned char data_02088c2c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087604[2] = {
    20, (unsigned int)&data_02088c2c
};
#pragma section forcedata end
#pragma pop
