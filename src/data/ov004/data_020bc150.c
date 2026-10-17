/* .data 0x020bc150..0x020bc154 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char sMgBannerButtonsArmed[4] = {
    1, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
