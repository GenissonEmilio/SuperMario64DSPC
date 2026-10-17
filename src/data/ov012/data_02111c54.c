/* .data 0x02111c54..0x02111c70 */
extern unsigned char data_ov012_02111e18[];
extern unsigned char data_ov012_02111ba4[];
extern unsigned char data_ov012_02111cf0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111c54[7] = {
    (unsigned int)&data_ov012_02111e18, (unsigned int)&data_ov012_02111ba4, 0x6fd0703, 0x7050704, (unsigned int)&data_ov012_02111cf0, 0x6400005, 15
};
#pragma section forcedata end
#pragma pop
