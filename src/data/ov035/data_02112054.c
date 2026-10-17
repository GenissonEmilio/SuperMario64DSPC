/* .data 0x02112054..0x0211205c */
extern unsigned char data_ov035_02112218[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov035_02112054[2] = {
    4, (unsigned int)&data_ov035_02112218
};
#pragma section forcedata end
#pragma pop
