/* .data 0x02090380..0x0209038c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090380[12] = {
    77, 71, 95, 83, 78, 79, 87, 66, 65, 76, 76, 0
};
#pragma section forcedata end
#pragma pop
