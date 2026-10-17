/* .data 0x021303dc..0x02130400 */
extern unsigned char daObjKanban_c_classInit[];
extern unsigned char _ZTI13daObjKanban_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KANBAN[9] = {
    (unsigned int)&daObjKanban_c_classInit, 0xa600b7, 2, 0x60000, 0x300000, 0x1000000, 0, 0,
    (unsigned int)&_ZTI13daObjKanban_c
};
#pragma section forcedata end
#pragma pop
