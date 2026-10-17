/* .data 0x020bc810..0x020bc818 */
extern unsigned char Coin_MoveThenRiseSpent[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_MoveThenRiseSpent[2] = {
    (unsigned int)&Coin_MoveThenRiseSpent, 0
};
#pragma section forcedata end
#pragma pop
