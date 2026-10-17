/* .data 0x02111784..0x0211178c */
extern unsigned char data_ov013_02111804[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_02111784[2] = {
    2, (unsigned int)&data_ov013_02111804
};
#pragma section forcedata end
#pragma pop
