/* .data 0x0209a04c..0x0209a054 */
extern unsigned char data_0208677c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a04c[1] = {
    (unsigned int)&data_0208677c
};

unsigned char data_0209a050[4] = {
    64, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
