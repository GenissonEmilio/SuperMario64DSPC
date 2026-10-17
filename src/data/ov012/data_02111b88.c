/* .data 0x02111b88..0x02111b8c */
extern unsigned char data_ov012_02111c14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111b88[1] = {
    (unsigned int)&data_ov012_02111c14
};
#pragma section forcedata end
#pragma pop
