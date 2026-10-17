/* .data 0x02111bac..0x02111bb4 */
extern unsigned char data_ov012_02111d74[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111bac[2] = {
    0x500, (unsigned int)&data_ov012_02111d74
};
#pragma section forcedata end
#pragma pop
