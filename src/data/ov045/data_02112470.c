/* .data 0x02112470..0x02112478 */
extern unsigned char data_ov045_021124ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov045_02112470[2] = {
    2, (unsigned int)&data_ov045_021124ac
};
#pragma section forcedata end
#pragma pop
