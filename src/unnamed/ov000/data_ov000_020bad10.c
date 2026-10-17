//cpp
/* .data 0x020bad10..0x020bad1c */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020bad10[3] = {
    0x6f6c5f69, 0x622e676e, 0x0000646d,
};
#pragma section forcedata end
