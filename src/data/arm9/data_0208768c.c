/* .data 0x0208768c..0x02087694 */
extern unsigned char data_02088200[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208768c[2] = {
    8, (unsigned int)&data_02088200
};
#pragma section forcedata end
#pragma pop
