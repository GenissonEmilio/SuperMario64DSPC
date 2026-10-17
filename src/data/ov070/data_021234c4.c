/* .data 0x021234c4..0x02123500 */
extern unsigned char data_ov070_021227d8[];
extern unsigned char data_ov070_02122594[];
extern unsigned char data_ov070_02122968[];
extern unsigned char data_ov070_0212259c[];
extern unsigned char data_ov070_021226bc[];
extern unsigned char data_ov070_0212262c[];
extern unsigned char data_ov070_02122598[];
extern unsigned char data_ov070_021225e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov070_021234c4[6] = {
    0x640002, 0, (unsigned int)&data_ov070_021227d8, (unsigned int)&data_ov070_02122594, (unsigned int)&data_ov070_02122968, (unsigned int)&data_ov070_0212259c
};

unsigned int data_ov070_021234dc[9] = {
    0x460002, 0, (unsigned int)&data_ov070_021226bc, (unsigned int)&data_ov070_0212262c, (unsigned int)&data_ov070_02122598, (unsigned int)&data_ov070_021225e4, 0, 0,
    0
};
#pragma section forcedata end
#pragma pop
