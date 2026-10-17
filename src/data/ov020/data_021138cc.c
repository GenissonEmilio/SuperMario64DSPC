/* .data 0x021138cc..0x021138d8 */
extern unsigned char data_ov020_021134e8[];
extern unsigned char data_ov020_021134e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021138cc[3] = {
    91, (unsigned int)&data_ov020_021134e8, (unsigned int)&data_ov020_021134e4
};
#pragma section forcedata end
#pragma pop
