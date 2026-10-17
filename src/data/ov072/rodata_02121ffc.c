/* .rodata 0x02121ffc..0x02122004 */
extern unsigned char gBigSnowmanCryTextureSequenceFile[];
extern unsigned char gBigSnowmanSmileTextureSequenceFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov072_02121ffc[2] = {
    (unsigned int)&gBigSnowmanCryTextureSequenceFile, (unsigned int)&gBigSnowmanSmileTextureSequenceFile
};
#pragma section forcerodata end
