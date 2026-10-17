/* .data 0x0211136c..0x02111374 */
extern unsigned char data_ov044_02111364[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov044_0211136c[2] = {
    1, (unsigned int)&data_ov044_02111364
};
#pragma section forcedata end
#pragma pop
