/* .data 0x0209a07c..0x0209a080 */
extern unsigned char data_02086868[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a07c[1] = {
    (unsigned int)&data_02086868
};
#pragma section forcedata end
#pragma pop
