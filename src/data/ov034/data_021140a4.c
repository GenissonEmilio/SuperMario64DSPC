/* .data 0x021140a4..0x021140b0 */
extern unsigned char data_ov034_0211408c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov034_021140a4[3] = {
    (unsigned int)&data_ov034_0211408c, 0, 0xd480101
};
#pragma section forcedata end
#pragma pop
