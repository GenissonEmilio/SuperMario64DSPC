/* .data 0x02135024..0x02135028 */
extern unsigned char gKm1DeruModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov091_02135024[1] = {
    (unsigned int)&gKm1DeruModelFile
};
#pragma section forcedata end
#pragma pop
