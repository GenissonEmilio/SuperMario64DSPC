//cpp
/* .data 0x020ab800..0x020ab808 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020ab800[2] = {
    0x69622e67, 0x0000006e,
};
#pragma section forcedata end
