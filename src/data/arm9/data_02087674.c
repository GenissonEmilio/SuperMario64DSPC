/* .data 0x02087674..0x0208767c */
extern unsigned char data_02088750[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087674[2] = {
    10, (unsigned int)&data_02088750
};
#pragma section forcedata end
#pragma pop
