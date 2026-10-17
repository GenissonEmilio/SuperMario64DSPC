/* .data 0x02111238..0x021112b0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov049_02111238[12] = {
    0, 0, 6, 255, 255, 127, 6, 0, 6, 255, 255, 127
};

unsigned char data_ov049_02111244[48] = {
    12, 0, 6, 255, 255, 127, 18, 0, 6, 255, 255, 127,
    24, 0, 6, 255, 255, 127, 30, 0, 6, 255, 255, 127,
    36, 0, 6, 255, 255, 127, 42, 0, 6, 255, 255, 127,
    48, 0, 8, 255, 255, 127, 56, 0, 8, 255, 255, 127
};

unsigned char data_ov049_02111274[60] = {
    0, 0, 18, 253, 0, 0, 84, 242, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 6, 255, 0, 0, 84, 242,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 250, 0,
    0, 0, 84, 242, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 238, 2, 0, 0, 84, 242, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
