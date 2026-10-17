/* .data 0x02111834..0x02111844 */
extern unsigned char daObjKumo_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_OBJ_KUMO[4] = {
    (unsigned int)&daObjKumo_c_classInit, 0x5013a, 0, 0
};
#pragma section forcedata end
#pragma pop
