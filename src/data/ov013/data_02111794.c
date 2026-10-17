/* .data 0x02111794..0x0211179c */
extern unsigned char data_ov013_02111824[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_02111794[2] = {
    2, (unsigned int)&data_ov013_02111824
};
#pragma section forcedata end
#pragma pop
