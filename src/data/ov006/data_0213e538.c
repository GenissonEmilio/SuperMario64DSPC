/* .data 0x0213e538..0x0213e540 */
extern unsigned char Slot3_State3and4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Slot3_State3and4[2] = {
    (unsigned int)&Slot3_State3and4, 0
};
#pragma section forcedata end
#pragma pop
