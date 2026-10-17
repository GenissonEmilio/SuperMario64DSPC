/* .data 0x021140e0..0x02114108 */
extern unsigned char data_ov034_0211427c[];
extern unsigned char data_ov034_021140d0[];
extern unsigned char data_ov034_0211419c[];
extern unsigned char data_ov034_021141fc[];
extern unsigned char data_ov034_02114094[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov034_021140ec[3] = {
    (unsigned int)&data_ov034_0211427c, 416, (unsigned int)&data_ov034_021140d0
};

unsigned int data_ov034_021140e0[3] = {
    0x600, (unsigned int)&data_ov034_0211419c, 0x1805
};

unsigned int data_ov034_021140f8[4] = {
    (unsigned int)&data_ov034_021141fc, (unsigned int)&data_ov034_02114094, 0x7e107e5, 0x7e707e6
};
#pragma section forcedata end
#pragma pop
