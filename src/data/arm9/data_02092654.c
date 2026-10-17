/* .data 0x02092654..0x02092660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02092654[12] = {
    42, 78, 79, 84, 32, 83, 84, 65, 71, 69, 42, 0
};
#pragma section forcedata end
#pragma pop
