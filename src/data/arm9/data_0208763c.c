/* .data 0x0208763c..0x02087644 */
extern unsigned char data_02087ca0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0208763c[2] = {
    7, (unsigned int)&data_02087ca0
};
#pragma section forcedata end
#pragma pop
