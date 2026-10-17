/* .data 0x021117f8..0x02111830 */
extern unsigned char data_ov058_02111754[];
extern unsigned char data_ov058_02111704[];
extern unsigned char data_ov058_02111830[];
extern unsigned char data_ov058_02111700[];
extern unsigned char data_ov058_021118c0[];
extern unsigned char data_ov058_021119a0[];
extern unsigned char data_ov058_02111878[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_021117f8[14] = {
    770, (unsigned int)&data_ov058_02111754, 259, (unsigned int)&data_ov058_02111704, 0x504, (unsigned int)&data_ov058_02111830, 267, (unsigned int)&data_ov058_02111700,
    0x601, (unsigned int)&data_ov058_021118c0, 0xc09, (unsigned int)&data_ov058_021119a0, 0x50a, (unsigned int)&data_ov058_02111878
};
#pragma section forcedata end
#pragma pop
