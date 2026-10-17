/* .data 0x021129b4..0x021129d0 */
extern unsigned char data_ov024_02113260[];
extern unsigned char data_ov024_02112888[];
extern unsigned char data_ov024_021128a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov024_021129b4[7] = {
    (unsigned int)&data_ov024_02113260, (unsigned int)&data_ov024_02112888, 0x7110713, 0x7150714, (unsigned int)&data_ov024_021128a8, 0x6400001, 111
};
#pragma section forcedata end
#pragma pop
