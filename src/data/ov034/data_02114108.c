/* .data 0x02114108..0x0211414c */
extern unsigned char data_ov034_021140a4[];
extern unsigned char data_ov034_021140b0[];
extern unsigned char data_ov034_02114080[];
extern unsigned char data_ov034_0211414c[];
extern unsigned char data_ov034_0211409c[];
extern unsigned char data_ov034_02114088[];
extern unsigned char data_ov034_02114084[];
extern unsigned char data_ov034_021140c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov034_02114108[3] = {
    (unsigned int)&data_ov034_021140a4, 0x1f40101, 15
};

unsigned int data_ov034_02114114[14] = {
    260, (unsigned int)&data_ov034_021140b0, 523, (unsigned int)&data_ov034_02114080, 0x501, (unsigned int)&data_ov034_0211414c, 264, (unsigned int)&data_ov034_0211409c,
    524, (unsigned int)&data_ov034_02114088, 270, (unsigned int)&data_ov034_02114084, 266, (unsigned int)&data_ov034_021140c0
};
#pragma section forcedata end
#pragma pop
