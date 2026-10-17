/* .data 0x02111520..0x0211152c */
extern unsigned char data_ov031_02111508[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov031_02111520[3] = {
    (unsigned int)&data_ov031_02111508, 0, 0x35480000
};
#pragma section forcedata end
#pragma pop
