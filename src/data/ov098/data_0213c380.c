/* .data 0x0213c380..0x0213c384 */
extern unsigned char gYajirusiLModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov098_0213c380[1] = {
    (unsigned int)&gYajirusiLModelFile
};
#pragma section forcedata end
#pragma pop
