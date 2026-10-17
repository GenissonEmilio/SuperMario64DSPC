/* .data 0x0213ca74..0x0213ca7c */
extern unsigned char Wiggler_TurnTowardAim[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Wiggler_TurnTowardAim_10[2] = {
    (unsigned int)&Wiggler_TurnTowardAim, 0
};
#pragma section forcedata end
#pragma pop
