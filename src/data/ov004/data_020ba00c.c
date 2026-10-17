/* .data 0x020ba00c..0x020ba010 */
extern unsigned char data_ov004_020baefc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba00c[1] = {
    (unsigned int)&data_ov004_020baefc
};
#pragma section forcedata end
#pragma pop
