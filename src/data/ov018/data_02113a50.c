/* .data 0x02113a50..0x02113a74 */
extern unsigned char daSCre_c_classInit[];
extern unsigned char _ZTI8daSCre_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STAR_CREATE[9] = {
    (unsigned int)&daSCre_c_classInit, 0x1630163, 0, 0, 0, 0, 0, 0,
    (unsigned int)&_ZTI8daSCre_c
};
#pragma section forcedata end
#pragma pop
