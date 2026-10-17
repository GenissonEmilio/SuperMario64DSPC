//cpp
/* .data 0x020baba8..0x020babf0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020baba8[9] = {
    0x63616e61, 0x2f6e6168, 0x616e6168, 0x6e616863, 0x646f625f, 0x5f333079, 0x616d6164, 0x622e6567,
    0x00006163,
};
extern "C" unsigned int data_ov000_020babcc[9] = {
    0x61746164, 0x656e652f, 0x682f796d, 0x63616e61, 0x2f6e6168, 0x616e6168, 0x6e616863, 0x646f625f,
    0x5f343079,
};
#pragma section forcedata end
