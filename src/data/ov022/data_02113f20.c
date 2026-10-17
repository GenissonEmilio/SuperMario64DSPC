/* .data 0x02113f20..0x02113f2c */
extern unsigned char _ZN8dActor_c16OnAimedAtWithEggEv[];
extern unsigned char _ZN8dActor_c25OnAimedAtWithEggReturnVecEv[];
extern unsigned char _ZN10dBgActor_c4KillEv[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov022_02113f20[3] = {
    (unsigned int)&_ZN8dActor_c16OnAimedAtWithEggEv, (unsigned int)&_ZN8dActor_c25OnAimedAtWithEggReturnVecEv, (unsigned int)&_ZN10dBgActor_c4KillEv
};
#pragma section forcedata end
#pragma pop
