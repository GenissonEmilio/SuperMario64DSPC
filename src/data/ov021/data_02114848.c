/* .data 0x02114848..0x02114860 */
extern unsigned char _ZN9daGrock_c13InitResourcesEv[];
extern unsigned char _ZN8dActor_c19BeforeInitResourcesEv[];
extern unsigned char _ZN8dActor_c18AfterInitResourcesEj[];
extern unsigned char _ZN9daGrock_c16CleanupResourcesEv[];
extern unsigned char _ZN8dActor_c22BeforeCleanupResourcesEv[];
extern unsigned char _ZN8dActor_c21AfterCleanupResourcesEj[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTV9daGrock_c[6] = {
    (unsigned int)&_ZN9daGrock_c13InitResourcesEv, (unsigned int)&_ZN8dActor_c19BeforeInitResourcesEv, (unsigned int)&_ZN8dActor_c18AfterInitResourcesEj, (unsigned int)&_ZN9daGrock_c16CleanupResourcesEv, (unsigned int)&_ZN8dActor_c22BeforeCleanupResourcesEv, (unsigned int)&_ZN8dActor_c21AfterCleanupResourcesEj
};
#pragma section forcedata end
#pragma pop
