/* .data 0x020ba010..0x020ba014 */
extern unsigned char data_ov004_020bb3ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba010[1] = {
    (unsigned int)&data_ov004_020bb3ac
};
#pragma section forcedata end
#pragma pop
