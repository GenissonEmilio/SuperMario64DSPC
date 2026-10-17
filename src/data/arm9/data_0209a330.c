/* .data 0x0209a330..0x0209a414 */
extern unsigned char data_020aa2d4[];
extern unsigned char func_020719ec[];
extern unsigned char func_020719b4[];
extern unsigned char func_020719ac[];
extern unsigned char data_020aa1d4[];
extern unsigned char data_020aa0d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a330[57] = {
    0, 292, 0, 0, 0, 0, 0, (unsigned int)&data_020aa2d4,
    256, (unsigned int)&data_020aa2d4, 0, 0, 0, 0, 0, (unsigned int)&func_020719ec,
    (unsigned int)&func_020719b4, (unsigned int)&func_020719ac, 0, 1, 296, 0, 0, 0,
    0, 0, (unsigned int)&data_020aa1d4, 256, (unsigned int)&data_020aa1d4, 0, 0, 0,
    0, 0, (unsigned int)&func_020719ec, (unsigned int)&func_020719b4, (unsigned int)&func_020719ac, 0, 2, 264,
    0, 0, 0, 0, 0, (unsigned int)&data_020aa0d4, 256, (unsigned int)&data_020aa0d4,
    0, 0, 0, 0, 0, (unsigned int)&func_020719ec, (unsigned int)&func_020719b4, (unsigned int)&func_020719ac,
    0
};
#pragma section forcedata end
#pragma pop
