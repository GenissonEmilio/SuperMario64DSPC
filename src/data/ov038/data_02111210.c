/* .data 0x02111210..0x02111218 */
extern unsigned char data_ov038_021112e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov038_02111210[2] = {
    0x4105, (unsigned int)&data_ov038_021112e4
};
#pragma section forcedata end
#pragma pop
