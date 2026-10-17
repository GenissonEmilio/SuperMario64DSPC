//cpp
/* .data 0x020abb94..0x020abbb4 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020abb94[4] = {
    0x64646170, 0x655f656c, 0x622e646e, 0x00006163,
};
extern "C" unsigned int data_ov000_020abba4[4] = {
    0x642f474d, 0x5f64325f, 0x5f67736d, 0x6c616f67,
};
#pragma section forcedata end
