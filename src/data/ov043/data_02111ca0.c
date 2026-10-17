/* .data 0x02111ca0..0x02111cc8 */
extern unsigned char data_ov043_02111cc8[];
extern unsigned char data_ov043_02111b04[];
extern unsigned char data_ov043_02111d10[];
extern unsigned char data_ov043_02111b00[];
extern unsigned char data_ov043_02111b24[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_02111ca0[10] = {
    0x504, (unsigned int)&data_ov043_02111cc8, 523, (unsigned int)&data_ov043_02111b04, 0x501, (unsigned int)&data_ov043_02111d10, 268, (unsigned int)&data_ov043_02111b00,
    266, (unsigned int)&data_ov043_02111b24
};
#pragma section forcedata end
#pragma pop
