/* .data 0x0211e7a8..0x0211e7c4 */
extern unsigned char daTBasket_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_T_BASKET[7] = {
    (unsigned int)&daTBasket_c_classInit, 0x3400d4, 2, 0x64000, 0x64000, 0x1000000, 0xa00000
};
#pragma section forcedata end
#pragma pop
