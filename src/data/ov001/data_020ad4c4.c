/* .data 0x020ad4c4..0x020ad4f4 */
extern unsigned char data_ov001_020ad49c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov001_020ad4c4[12] = {
    (unsigned int)&data_ov001_020ad49c, 0xffffffffU, 0xffffffffU, 0x1000, 0x1000, 0, 0, 0,
    0, 0x1f0080, 0x8000, 0
};
#pragma section forcedata end
#pragma pop
