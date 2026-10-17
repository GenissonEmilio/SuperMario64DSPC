/* .data 0x021117a4..0x021117c8 */
extern unsigned char data_ov058_02111734[];
extern unsigned char data_ov058_02111714[];
extern unsigned char data_ov058_0211173c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_021117a4[9] = {
    (unsigned int)&data_ov058_02111734, 0, 0x6400100, (unsigned int)&data_ov058_02111714, 0, 0x6400100, (unsigned int)&data_ov058_0211173c, 0,
    0x6400100
};
#pragma section forcedata end
#pragma pop
