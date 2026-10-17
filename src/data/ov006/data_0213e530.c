/* .data 0x0213e530..0x0213e538 */
extern unsigned char Slot3_State1[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Slot3_State1[2] = {
    (unsigned int)&Slot3_State1, 0
};
#pragma section forcedata end
#pragma pop
