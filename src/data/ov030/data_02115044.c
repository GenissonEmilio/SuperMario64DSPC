/* .data 0x02115044..0x02115094 */
extern unsigned char data_ov030_02115514[];
extern unsigned char data_ov030_021151ec[];
extern unsigned char data_ov030_02114df0[];
extern unsigned char data_ov030_02114f44[];
extern unsigned char data_ov030_02114de8[];
extern unsigned char data_ov030_02114f04[];
extern unsigned char data_ov030_02114e30[];
extern unsigned char data_ov030_02114e40[];
extern unsigned char data_ov030_02114e60[];
extern unsigned char data_ov030_02114e70[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02115044[20] = {
    0x4200, (unsigned int)&data_ov030_02115514, 0x6505, (unsigned int)&data_ov030_021151ec, 293, (unsigned int)&data_ov030_02114df0, 832, (unsigned int)&data_ov030_02114f44,
    325, (unsigned int)&data_ov030_02114de8, 608, (unsigned int)&data_ov030_02114f04, 384, (unsigned int)&data_ov030_02114e30, 416, (unsigned int)&data_ov030_02114e40,
    448, (unsigned int)&data_ov030_02114e60, 480, (unsigned int)&data_ov030_02114e70
};
#pragma section forcedata end
#pragma pop
