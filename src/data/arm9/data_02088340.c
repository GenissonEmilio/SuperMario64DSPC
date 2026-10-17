/* .data 0x02088340..0x02088388 */
extern unsigned char data_0208050a[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02088340[18] = {
    0x413, 0xdf02ffffU, 0xc903c9ffU, 0x6cffa707, 0x70ae603, 0xff000000U, 0x808ff, 0x2f002f,
    0x308050a, 0, (unsigned int)&data_0208050a, 0, 0x108050a, 0, 0x60a050a, 0x460046,
    0, 0
};
#pragma section forcedata end
#pragma pop
