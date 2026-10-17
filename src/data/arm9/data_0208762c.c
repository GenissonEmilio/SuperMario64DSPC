/* .data 0x0208762c..0x02087634 */
extern unsigned char data_020881c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208762c[2] = {
    8, (unsigned int)&data_020881c0
};
#pragma section forcedata end
#pragma pop
