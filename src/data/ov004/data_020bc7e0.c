/* .data 0x020bc7e0..0x020bc7e8 */
extern unsigned char Coin_RiseSpent[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_RiseSpent[2] = {
    (unsigned int)&Coin_RiseSpent, 0
};
#pragma section forcedata end
#pragma pop
