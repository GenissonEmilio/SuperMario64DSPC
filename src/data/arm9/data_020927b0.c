/* .data 0x020927b0..0x02092808 */
extern unsigned char data_02097fd4[];
extern unsigned char data_02098214[];
extern unsigned char data_0209843c[];
extern unsigned char data_020986e0[];
extern unsigned char data_02098918[];
extern unsigned char data_02096394[];
extern unsigned char data_020965e0[];
extern unsigned char data_02096808[];
extern unsigned char data_02096a7c[];
extern unsigned char data_02096cb4[];
extern unsigned char data_020945f0[];
extern unsigned char data_02094be4[];
extern unsigned char data_020951c4[];
extern unsigned char data_020957f8[];
extern unsigned char data_02095dfc[];
extern unsigned char func_02030dac[];
extern unsigned char func_02030ca0[];
extern unsigned char func_02030c38[];
extern unsigned char func_02030b58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020927d8[5] = {
    (unsigned int)&data_02097fd4, (unsigned int)&data_02098214, (unsigned int)&data_0209843c, (unsigned int)&data_020986e0, (unsigned int)&data_02098918
};

unsigned int data_020927c4[5] = {
    (unsigned int)&data_02096394, (unsigned int)&data_020965e0, (unsigned int)&data_02096808, (unsigned int)&data_02096a7c, (unsigned int)&data_02096cb4
};

unsigned int data_020927b0[5] = {
    (unsigned int)&data_020945f0, (unsigned int)&data_02094be4, (unsigned int)&data_020951c4, (unsigned int)&data_020957f8, (unsigned int)&data_02095dfc
};

unsigned int data_020927ec[7] = {
    0, (unsigned int)&func_02030dac, 0, (unsigned int)&func_02030ca0, (unsigned int)&func_02030c38, (unsigned int)&func_02030b58, 0
};
#pragma section forcedata end
#pragma pop
