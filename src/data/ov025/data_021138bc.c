/* .data 0x021138bc..0x021138d0 */
extern unsigned char _ZN8dActor_c15OnHitByMegaCharER6Player[];
extern unsigned char _ZN8dActor_c19OnHitFromUnderneathERS_[];
extern unsigned char _ZN7daDkk_c16OnAimedAtWithEggEv[];
extern unsigned char _ZN8dActor_c25OnAimedAtWithEggReturnVecEv[];
extern unsigned char _ZN10dBgActor_c4KillEv[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_021138bc[2] = {
    (unsigned int)&_ZN8dActor_c15OnHitByMegaCharER6Player, (unsigned int)&_ZN8dActor_c19OnHitFromUnderneathERS_
};

unsigned int data_ov025_021138c4[3] = {
    (unsigned int)&_ZN7daDkk_c16OnAimedAtWithEggEv, (unsigned int)&_ZN8dActor_c25OnAimedAtWithEggReturnVecEv, (unsigned int)&_ZN10dBgActor_c4KillEv
};
#pragma section forcedata end
#pragma pop
