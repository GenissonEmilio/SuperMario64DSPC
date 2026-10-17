/* .data 0x0213c388..0x0213c398 */
extern unsigned char data_ov002_0210d914[];
extern unsigned char gYajirusiRModelFile[];
extern unsigned char gYajirusiRCollisionFile[];
extern unsigned char data_ov002_0210d734[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov098_0213c388[4] = {
    (unsigned int)&data_ov002_0210d914, (unsigned int)&gYajirusiRModelFile, (unsigned int)&gYajirusiRCollisionFile, (unsigned int)&data_ov002_0210d734
};
#pragma section forcedata end
#pragma pop
