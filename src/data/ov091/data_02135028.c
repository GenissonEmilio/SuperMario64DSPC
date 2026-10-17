/* .data 0x02135028..0x0213502c */
extern unsigned char gKm1DeruCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov091_02135028[1] = {
    (unsigned int)&gKm1DeruCollisionFile
};
#pragma section forcedata end
#pragma pop
