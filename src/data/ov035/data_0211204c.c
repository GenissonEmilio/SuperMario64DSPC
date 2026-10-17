/* .data 0x0211204c..0x02112054 */
extern unsigned char data_ov035_02112278[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov035_0211204c[2] = {
    6, (unsigned int)&data_ov035_02112278
};
#pragma section forcedata end
#pragma pop
