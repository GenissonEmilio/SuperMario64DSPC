/* .data 0x02111c14..0x02111c20 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov012_02111c14[12] = {
    42, 0, 22, 13, 230, 251, 158, 7, 0, 0, 0, 192
};
#pragma section forcedata end
#pragma pop
