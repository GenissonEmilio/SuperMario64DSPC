/* .data 0x0208756c..0x02087574 */
extern unsigned char data_02088538[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208756c[2] = {
    9, (unsigned int)&data_02088538
};
#pragma section forcedata end
#pragma pop
