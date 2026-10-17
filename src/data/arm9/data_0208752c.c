/* .data 0x0208752c..0x02087534 */
extern unsigned char data_02088660[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208752c[2] = {
    10, (unsigned int)&data_02088660
};
#pragma section forcedata end
#pragma pop
