/* .data 0x02111258..0x02111268 */
extern unsigned char data_ov054_021113b4[];
extern unsigned char data_ov054_02111238[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_02111258[4] = {
    0x500, (unsigned int)&data_ov054_021113b4, 517, (unsigned int)&data_ov054_02111238
};
#pragma section forcedata end
#pragma pop
