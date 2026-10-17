/* .data 0x021138d8..0x021138e4 */
extern unsigned char data_ov020_02113508[];
extern unsigned char data_ov020_021134ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021138d8[3] = {
    (unsigned int)&data_ov020_02113508, 1, (unsigned int)&data_ov020_021134ec
};
#pragma section forcedata end
#pragma pop
