/* .data 0x020bc7e8..0x020bc7f0 */
extern unsigned char Coin_Move[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_Move[2] = {
    (unsigned int)&Coin_Move, 0
};
#pragma section forcedata end
#pragma pop
