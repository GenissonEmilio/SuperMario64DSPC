/* .data 0x0211173c..0x02111754 */
extern unsigned char data_ov058_0211171c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_02111740[1] = {
    (unsigned int)&data_ov058_0211171c
};

unsigned char data_ov058_0211173c[4] = {
    1, 0, 0, 0
};

unsigned char data_ov058_02111744[16] = {
    75, 0, 68, 2, 213, 2, 48, 248, 255, 255, 56, 78,
    0, 0, 13, 7
};
#pragma section forcedata end
#pragma pop
