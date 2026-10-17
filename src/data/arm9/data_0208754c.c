/* .data 0x0208754c..0x02087554 */
extern unsigned char data_02087828[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208754c[2] = {
    6, (unsigned int)&data_02087828
};
#pragma section forcedata end
#pragma pop
