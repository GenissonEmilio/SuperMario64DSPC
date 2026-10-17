/* .data 0x02111374..0x0211137c */
extern unsigned char data_ov044_02111398[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov044_02111374[2] = {
    3, (unsigned int)&data_ov044_02111398
};
#pragma section forcedata end
#pragma pop
