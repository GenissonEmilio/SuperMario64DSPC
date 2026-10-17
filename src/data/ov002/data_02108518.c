/* .data 0x02108518..0x0210853c */
extern unsigned char daCamTag_c_classInit[];
extern unsigned char _ZTI10daCamTag_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CAMERA_TAG[9] = {
    (unsigned int)&daCamTag_c_classInit, 0x1014d, 0, 0, 0, 0, 0, 0,
    (unsigned int)&_ZTI10daCamTag_c
};
#pragma section forcedata end
#pragma pop
