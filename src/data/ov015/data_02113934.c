/* .data 0x02113934..0x02113968 */
extern unsigned char data_ov015_021134e0[];
extern unsigned char data_ov015_02113714[];
extern unsigned char data_ov015_02113470[];
extern unsigned char data_ov015_02113744[];
extern unsigned char data_ov015_02113490[];
extern unsigned char data_ov015_02113774[];
extern unsigned char data_ov015_021134a0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_02113934[13] = {
    (unsigned int)&data_ov015_021134e0, 928, (unsigned int)&data_ov015_02113714, 677, (unsigned int)&data_ov015_02113470, 960, (unsigned int)&data_ov015_02113744, 709,
    (unsigned int)&data_ov015_02113490, 992, (unsigned int)&data_ov015_02113774, 741, (unsigned int)&data_ov015_021134a0
};
#pragma section forcedata end
#pragma pop
