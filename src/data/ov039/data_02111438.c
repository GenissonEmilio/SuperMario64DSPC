/* .data 0x02111438..0x02111454 */
extern unsigned char data_ov039_021114d8[];
extern unsigned char data_ov039_0211140c[];
extern unsigned char data_ov039_0211141c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_02111438[7] = {
    (unsigned int)&data_ov039_021114d8, (unsigned int)&data_ov039_0211140c, 0x74b074d, 0x74f074e, (unsigned int)&data_ov039_0211141c, 0x3e80001, 47
};
#pragma section forcedata end
#pragma pop
