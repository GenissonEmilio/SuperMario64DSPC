/* .data 0x020aa590..0x020aa5a0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa590[16] = {
    77, 71, 47, 102, 97, 99, 101, 95, 119, 105, 110, 46,
    98, 116, 112, 0
};
#pragma section forcedata end
#pragma pop
