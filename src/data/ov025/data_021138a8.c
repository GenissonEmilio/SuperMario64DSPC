/* .data 0x021138a8..0x021138bc */
extern unsigned char _ZN8dActor_c11OnAttacked1ERS_[];
extern unsigned char _ZN8dActor_c11OnAttacked2ERS_[];
extern unsigned char _ZN8dActor_c8OnKickedERS_[];
extern unsigned char _ZN8dActor_c8OnPushedERS_[];
extern unsigned char _ZN8dActor_c24OnHitByCannonBlastedCharERS_[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_021138a8[5] = {
    (unsigned int)&_ZN8dActor_c11OnAttacked1ERS_, (unsigned int)&_ZN8dActor_c11OnAttacked2ERS_, (unsigned int)&_ZN8dActor_c8OnKickedERS_, (unsigned int)&_ZN8dActor_c8OnPushedERS_, (unsigned int)&_ZN8dActor_c24OnHitByCannonBlastedCharERS_
};
#pragma section forcedata end
#pragma pop
