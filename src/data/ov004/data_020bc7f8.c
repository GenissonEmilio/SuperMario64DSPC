/* .data 0x020bc7f8..0x020bc800 */
extern unsigned char Coin_Rise[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_Rise[2] = {
    (unsigned int)&Coin_Rise, 0
};
#pragma section forcedata end
#pragma pop
