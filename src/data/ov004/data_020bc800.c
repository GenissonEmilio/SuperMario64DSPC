/* .data 0x020bc800..0x020bc808 */
extern unsigned char Coin_MoveThenBank[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_MoveThenBank[2] = {
    (unsigned int)&Coin_MoveThenBank, 0
};
#pragma section forcedata end
#pragma pop
