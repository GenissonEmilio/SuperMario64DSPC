/* .data 0x0213c384..0x0213c388 */
extern unsigned char gYajirusiLCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov098_0213c384[1] = {
    (unsigned int)&gYajirusiLCollisionFile
};
#pragma section forcedata end
#pragma pop
