/* .data 0x02111938..0x02111940 */
extern unsigned char data_ov055_02111a00[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111938[2] = {
    6, (unsigned int)&data_ov055_02111a00
};
#pragma section forcedata end
#pragma pop
