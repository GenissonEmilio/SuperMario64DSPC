/* .data 0x0211433c..0x02114350 */
extern unsigned char daObjBkBillboard_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BK_BILLBOARD[5] = {
    (unsigned int)&daObjBkBillboard_c_classInit, 0xc3002a, 0, 0, 0x10000
};
#pragma section forcedata end
#pragma pop
