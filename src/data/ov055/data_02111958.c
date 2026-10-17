/* .data 0x02111958..0x02111960 */
extern unsigned char data_ov055_021119d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111958[2] = {
    768, (unsigned int)&data_ov055_021119d0
};
#pragma section forcedata end
#pragma pop
