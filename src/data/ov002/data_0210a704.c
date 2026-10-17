/* .data 0x0210a704..0x0210a720 */
extern unsigned char daPly_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PLAYER[7] = {
    (unsigned int)&daPly_c_classInit, 0x1200bf, 2, 0xfa000, 0xfa000, 0x2ee0000, 0x2ee0000
};
#pragma section forcedata end
#pragma pop
