/* .data 0x0209a084..0x0209a088 */
extern unsigned char data_0209a08c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a084[1] = {
    (unsigned int)&data_0209a08c
};
#pragma section forcedata end
#pragma pop
