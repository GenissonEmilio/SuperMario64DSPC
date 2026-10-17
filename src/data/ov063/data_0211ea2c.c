/* .data 0x0211ea2c..0x0211ea48 */
extern unsigned char daTrsTrap_c_classInit_BOOKSHELF[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BOOKSHELF[7] = {
    (unsigned int)&daTrsTrap_c_classInit_BOOKSHELF, 0x37009e, 0, 0x64000, 0x64000, 0x1000000, 0xa00000
};
#pragma section forcedata end
#pragma pop
