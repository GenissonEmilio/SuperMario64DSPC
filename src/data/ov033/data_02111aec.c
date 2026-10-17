/* .data 0x02111aec..0x02111af4 */
extern unsigned char data_ov033_02111cb8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov033_02111aec[2] = {
    10, (unsigned int)&data_ov033_02111cb8
};
#pragma section forcedata end
#pragma pop
