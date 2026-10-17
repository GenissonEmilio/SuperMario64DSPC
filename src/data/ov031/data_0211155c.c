/* .data 0x0211155c..0x0211159c */
extern unsigned char data_ov031_021115e8[];
extern unsigned char data_ov031_02111510[];
extern unsigned char data_ov031_02111520[];
extern unsigned char data_ov031_0211152c[];
extern unsigned char data_ov031_02111500[];
extern unsigned char data_ov031_021115a8[];
extern unsigned char data_ov031_02111518[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov031_0211155c[1] = {
    (unsigned int)&data_ov031_021115e8
};

unsigned int data_ov031_02111560[6] = {
    (unsigned int)&data_ov031_02111510, 0x7550757, 0x7590758, (unsigned int)&data_ov031_02111520, 0xaf00001, 15
};

unsigned int data_ov031_02111578[9] = {
    260, (unsigned int)&data_ov031_0211152c, 267, (unsigned int)&data_ov031_02111500, 0x401, (unsigned int)&data_ov031_021115a8, 264, (unsigned int)&data_ov031_02111518,
    270
};
#pragma section forcedata end
#pragma pop
