/* .data 0x02088000..0x02088040 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02088000[64] = {
    0, 50, 233, 232, 102, 26, 236, 232, 1, 50, 233, 232,
    102, 26, 236, 232, 2, 50, 236, 233, 158, 26, 176, 232,
    3, 50, 99, 235, 145, 26, 101, 232, 0, 50, 197, 235,
    148, 26, 84, 232, 0, 0, 197, 235, 148, 26, 84, 232,
    0, 0, 197, 235, 148, 26, 84, 232, 255, 0, 197, 235,
    148, 26, 84, 232
};
#pragma section forcedata end
#pragma pop
