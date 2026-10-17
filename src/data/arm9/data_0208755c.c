/* .data 0x0208755c..0x02087564 */
extern unsigned char data_02088080[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208755c[2] = {
    8, (unsigned int)&data_02088080
};
#pragma section forcedata end
#pragma pop
