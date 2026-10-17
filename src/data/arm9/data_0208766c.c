/* .data 0x0208766c..0x02087674 */
extern unsigned char data_020892c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208766c[2] = {
    35, (unsigned int)&data_020892c0
};
#pragma section forcedata end
#pragma pop
