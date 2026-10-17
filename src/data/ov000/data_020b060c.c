/* .data 0x020b060c..0x020b0618 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b060c[12] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 98
};
#pragma section forcedata end
#pragma pop
