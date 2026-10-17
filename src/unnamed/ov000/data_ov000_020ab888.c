//cpp
/* .data 0x020ab888..0x020ab8a0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern "C" unsigned int data_ov000_020ab888[3] = {
    0x636e5f46, 0x69622e67, 0x0000006e,
};
extern "C" unsigned int data_ov000_020ab894[3] = {
    0x642f474d, 0x5f64325f, 0x745f676d,
};
#pragma section forcedata end
