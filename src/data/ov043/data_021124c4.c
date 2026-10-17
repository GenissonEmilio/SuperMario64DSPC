/* .data 0x021124c4..0x021124d4 */
extern unsigned char _ZN8dActor_c24OnHitByCannonBlastedCharERS_[];
extern unsigned char _ZN8dActor_c15OnHitByMegaCharER6Player[];
extern unsigned char _ZN8dActor_c19OnHitFromUnderneathERS_[];
extern unsigned char _ZN8dActor_c16OnAimedAtWithEggEv[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_021124c4[4] = {
    (unsigned int)&_ZN8dActor_c24OnHitByCannonBlastedCharERS_, (unsigned int)&_ZN8dActor_c15OnHitByMegaCharER6Player, (unsigned int)&_ZN8dActor_c19OnHitFromUnderneathERS_, (unsigned int)&_ZN8dActor_c16OnAimedAtWithEggEv
};
#pragma section forcedata end
#pragma pop
