/* .data 0x020ab8a0..0x020ab8e8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char _ZN3OAM13MM_WARIO_ICONE[8] = {
    240, 0, 240, 129, 136, 193, 255, 255
};

unsigned char _ZN3OAM20MM_WARIO_NO_CAP_ICONE[16] = {
    0, 64, 240, 129, 200, 193, 0, 0, 240, 64, 240, 129,
    152, 193, 255, 255
};

unsigned char _ZN3OAM19MM_WARIO_L_CAP_ICONE[24] = {
    240, 0, 244, 65, 79, 177, 0, 0, 240, 128, 4, 0,
    81, 177, 0, 0, 240, 0, 240, 129, 136, 193, 255, 255
};

unsigned char _ZN3OAM19MM_WARIO_M_CAP_ICONE[24] = {
    240, 0, 244, 65, 15, 161, 0, 0, 240, 128, 4, 0,
    17, 161, 0, 0, 240, 0, 240, 129, 136, 193, 255, 255
};
#pragma section forcedata end
#pragma pop
