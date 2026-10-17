/* .data 0x020bc808..0x020bc810 */
extern unsigned char Coin_FlyToCounter[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Coin_FlyToCounter[2] = {
    (unsigned int)&Coin_FlyToCounter, 0
};
#pragma section forcedata end
#pragma pop
