/* .data 0x0208761c..0x02087624 */
extern unsigned char data_02087e98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208761c[2] = {
    7, (unsigned int)&data_02087e98
};
#pragma section forcedata end
#pragma pop
