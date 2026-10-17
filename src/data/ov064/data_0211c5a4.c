/* .data 0x0211c5a4..0x0211c5c8 */
extern unsigned char daObjShell_c_classInit[];
extern unsigned char _ZTI12daObjShell_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_OBJ_SHELL[9] = {
    (unsigned int)&daObjShell_c_classInit, 0x139013b, 3, 0x60000, 0x100000, 0x2000000, 0, 0,
    (unsigned int)&_ZTI12daObjShell_c
};
#pragma section forcedata end
#pragma pop
