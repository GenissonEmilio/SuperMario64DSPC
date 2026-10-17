/* .data 0x0213e578..0x0213e580 */
extern unsigned char Slot3_State7[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Slot3_State7[2] = {
    (unsigned int)&Slot3_State7, 0
};
#pragma section forcedata end
#pragma pop
