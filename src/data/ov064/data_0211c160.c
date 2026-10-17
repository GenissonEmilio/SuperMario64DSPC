/* .data 0x0211c160..0x0211c17c */
extern unsigned char daObjFl_Puzzle_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_FL_PUZZLE[7] = {
    (unsigned int)&daObjFl_Puzzle_c_classInit, 0x11e004e, 2, 0, 0x180000, 0x2000000, 0x2000000
};
#pragma section forcedata end
#pragma pop
