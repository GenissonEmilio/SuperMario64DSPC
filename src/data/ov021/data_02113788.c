/* .data 0x02113788..0x02113790 */
extern unsigned char data_ov021_0211386c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113788[2] = {
    256, (unsigned int)&data_ov021_0211386c
};
#pragma section forcedata end
#pragma pop
