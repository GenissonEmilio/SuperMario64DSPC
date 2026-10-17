/* .data 0x02111a00..0x02111a30 */
extern unsigned char data_ov055_0211194c[];
extern unsigned char data_ov055_02111928[];
extern unsigned char data_ov055_02111978[];
extern unsigned char data_ov055_02111920[];
extern unsigned char data_ov055_02111968[];
extern unsigned char data_ov055_02111924[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111a00[12] = {
    514, (unsigned int)&data_ov055_0211194c, 259, (unsigned int)&data_ov055_02111928, 516, (unsigned int)&data_ov055_02111978, 267, (unsigned int)&data_ov055_02111920,
    257, (unsigned int)&data_ov055_02111968, 268, (unsigned int)&data_ov055_02111924
};
#pragma section forcedata end
#pragma pop
