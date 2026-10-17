/* .data 0x0210cae4..0x0210caec */
extern unsigned char _ZN3OAM11MM_STAR_KEYE[];
extern unsigned char _ZN3OAM18MM_STAR_KEY_BRIGHTE[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZN3OAM12MM_STAR_KEYSE[2] = {
    (unsigned int)&_ZN3OAM11MM_STAR_KEYE, (unsigned int)&_ZN3OAM18MM_STAR_KEY_BRIGHTE
};
#pragma section forcedata end
#pragma pop
