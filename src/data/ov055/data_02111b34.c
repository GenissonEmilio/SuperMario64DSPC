/* .data 0x02111b34..0x02111b60 */
extern unsigned char _ZN8dActor_c15OnGroundPoundedERS_[];
extern unsigned char _ZN8dActor_c11OnAttacked1ERS_[];
extern unsigned char _ZN8dActor_c11OnAttacked2ERS_[];
extern unsigned char _ZN8dActor_c8OnKickedERS_[];
extern unsigned char _ZN8dActor_c8OnPushedERS_[];
extern unsigned char _ZN8dActor_c24OnHitByCannonBlastedCharERS_[];
extern unsigned char _ZN8dActor_c15OnHitByMegaCharER6Player[];
extern unsigned char _ZN8dActor_c19OnHitFromUnderneathERS_[];
extern unsigned char _ZN8dActor_c16OnAimedAtWithEggEv[];
extern unsigned char _ZN8dActor_c25OnAimedAtWithEggReturnVecEv[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111b34[4] = {
    (unsigned int)&_ZN8dActor_c15OnGroundPoundedERS_, (unsigned int)&_ZN8dActor_c11OnAttacked1ERS_, (unsigned int)&_ZN8dActor_c11OnAttacked2ERS_, (unsigned int)&_ZN8dActor_c8OnKickedERS_
};

unsigned int data_ov055_02111b44[7] = {
    (unsigned int)&_ZN8dActor_c8OnPushedERS_, (unsigned int)&_ZN8dActor_c24OnHitByCannonBlastedCharERS_, (unsigned int)&_ZN8dActor_c15OnHitByMegaCharER6Player, (unsigned int)&_ZN8dActor_c19OnHitFromUnderneathERS_, (unsigned int)&_ZN8dActor_c16OnAimedAtWithEggEv, (unsigned int)&_ZN8dActor_c25OnAimedAtWithEggReturnVecEv, 0
};
#pragma section forcedata end
#pragma pop
