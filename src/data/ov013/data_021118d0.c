/* .data 0x021118d0..0x0211190c */
extern unsigned char data_ov013_02111f18[];
extern unsigned char data_ov013_02111860[];
extern unsigned char data_ov013_02111c54[];
extern unsigned char data_ov013_021117ec[];
extern unsigned char data_ov013_02111d28[];
extern unsigned char data_ov013_0211196c[];
extern unsigned char data_ov013_021117f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_021118d0[15] = {
    0x4c02, (unsigned int)&data_ov013_02111f18, 0x803, (unsigned int)&data_ov013_02111860, 0xf04, (unsigned int)&data_ov013_02111c54, 0x60b, (unsigned int)&data_ov013_021117ec,
    0xf01, (unsigned int)&data_ov013_02111d28, 0x809, (unsigned int)&data_ov013_0211196c, 0x60c, (unsigned int)&data_ov013_021117f8, 270
};
#pragma section forcedata end
#pragma pop
