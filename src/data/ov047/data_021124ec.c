/* .data 0x021124ec..0x021124f8 */
extern unsigned char daObjKm3_Dorifu_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KM3_DORIFU[3] = {
    (unsigned int)&daObjKm3_Dorifu_c_classInit, 0xe00099, 0
};
#pragma section forcedata end
#pragma pop
