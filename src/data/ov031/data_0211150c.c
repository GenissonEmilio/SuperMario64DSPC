/* .data 0x0211150c..0x02111510 */
extern unsigned char data_ov031_0211154c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov031_0211150c[1] = {
    (unsigned int)&data_ov031_0211154c
};
#pragma section forcedata end
#pragma pop
