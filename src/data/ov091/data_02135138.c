/* .data 0x02135138..0x02135150 */
extern unsigned char gDosuneModelFile[];
extern unsigned char gDosuneCollisionFile[];
extern unsigned char data_ov091_02135100[];
extern unsigned char gDosuneTextureSequenceFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov091_02135138[6] = {
    (unsigned int)&gDosuneModelFile, (unsigned int)&gDosuneCollisionFile, (unsigned int)&data_ov091_02135100, (unsigned int)&gDosuneTextureSequenceFile, 0x140000, 0xe6000
};
#pragma section forcedata end
#pragma pop
