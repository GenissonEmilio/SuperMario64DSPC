/* .data 0x02111624..0x02111640 */
extern unsigned char data_ov048_02111780[];
extern unsigned char data_ov048_021115ac[];
extern unsigned char data_ov048_021115c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_02111624[7] = {
    (unsigned int)&data_ov048_02111780, (unsigned int)&data_ov048_021115ac, 0x7850787, 0x7890788, (unsigned int)&data_ov048_021115c8, 0x3200001, 191
};
#pragma section forcedata end
#pragma pop
