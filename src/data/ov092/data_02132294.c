/* .data 0x02132294..0x021322a0 */
extern unsigned char data_ov092_0213246c[];
extern unsigned char data_ov092_02132350[];
extern unsigned char data_ov092_021323dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov092_02132294[3] = {
    (unsigned int)&data_ov092_0213246c, (unsigned int)&data_ov092_02132350, (unsigned int)&data_ov092_021323dc
};
#pragma section forcedata end
#pragma pop
