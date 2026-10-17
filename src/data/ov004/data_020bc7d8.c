/* .data 0x020bc7d8..0x020bc7e0 */
extern unsigned char Coin_MoveThenRise[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_MoveThenRise[2] = {
    (unsigned int)&Coin_MoveThenRise, 0
};
#pragma section forcedata end
#pragma pop
