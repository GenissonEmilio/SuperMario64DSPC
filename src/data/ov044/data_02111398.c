/* .data 0x02111398..0x021113ac */
extern unsigned char data_ov044_02111388[];
extern unsigned char data_ov044_02111360[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov044_02111398[5] = {
    260, (unsigned int)&data_ov044_02111388, 267, (unsigned int)&data_ov044_02111360, 0x401
};
#pragma section forcedata end
#pragma pop
