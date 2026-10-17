//cpp
/* .data 0x020b0900..0x020b0924 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020b0900[9] = {
    0x61746164, 0x616c702f, 0x2f726579, 0x78745f59, 0x656c735f, 0x745f7065, 0x696c5f6f, 0x74622e65,
    0x00000070,
};
#pragma section forcedata end
