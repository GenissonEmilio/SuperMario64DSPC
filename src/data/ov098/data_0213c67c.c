/* .data 0x0213c67c..0x0213c6a0 */
extern unsigned char daCnn_c_classInit[];
extern unsigned char _ZTI7daCnn_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CANNON[9] = {
    (unsigned int)&daCnn_c_classInit, 0x2f00cf, 3, 0xc8000, 0xc8000, 0x1000000, 0, 0,
    (unsigned int)&_ZTI7daCnn_c
};
#pragma section forcedata end
#pragma pop
