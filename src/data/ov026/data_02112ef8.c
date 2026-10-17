/* .data 0x02112ef8..0x02112f10 */
extern unsigned char data_ov026_02112498[];
extern unsigned char data_ov026_02112494[];
extern unsigned char data_ov026_021125cc[];
extern unsigned char data_ov026_021124ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov026_02112ef8[6] = {
    91, (unsigned int)&data_ov026_02112498, (unsigned int)&data_ov026_02112494, (unsigned int)&data_ov026_021125cc, 2, (unsigned int)&data_ov026_021124ac
};
#pragma section forcedata end
#pragma pop
