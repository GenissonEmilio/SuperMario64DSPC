/* .data 0x021124d4..0x021124ec */
extern unsigned char data_ov053_021112dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov053_021124d4[2] ;

unsigned char data_ov053_021124dc[16] = {
    0, 0, 0, 0, 232, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 255
};
#pragma section forcedata end
#pragma pop
