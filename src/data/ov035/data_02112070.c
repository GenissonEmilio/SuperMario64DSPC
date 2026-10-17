/* .data 0x02112070..0x0211207c */
extern unsigned char data_ov035_02112054[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov035_02112070[3] = {
    (unsigned int)&data_ov035_02112054, 0, 0x1f400000
};
#pragma section forcedata end
#pragma pop
