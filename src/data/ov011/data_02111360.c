/* .data 0x02111360..0x0211136c */
extern unsigned char data_ov011_02111350[];
extern unsigned char data_ov011_02111394[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_02111360[3] = {
    (unsigned int)&data_ov011_02111350, (unsigned int)&data_ov011_02111394, 0xa280000
};
#pragma section forcedata end
#pragma pop
