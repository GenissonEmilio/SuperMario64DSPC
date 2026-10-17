/* .rodata 0x0211adc8..0x0211ae00 */
extern unsigned char gFl1400ModelFile[];
extern unsigned char gFl1401ModelFile[];
extern unsigned char gFl1402ModelFile[];
extern unsigned char gFl1403ModelFile[];
extern unsigned char gFl1404ModelFile[];
extern unsigned char gFl1405ModelFile[];
extern unsigned char gFl1406ModelFile[];
extern unsigned char gFl1407ModelFile[];
extern unsigned char gFl1408ModelFile[];
extern unsigned char gFl1409ModelFile[];
extern unsigned char gFl1410ModelFile[];
extern unsigned char gFl1411ModelFile[];
extern unsigned char gFl1412ModelFile[];
extern unsigned char gFl1413ModelFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov064_0211adc8[14] = {
    (unsigned int)&gFl1400ModelFile, (unsigned int)&gFl1401ModelFile, (unsigned int)&gFl1402ModelFile, (unsigned int)&gFl1403ModelFile, (unsigned int)&gFl1404ModelFile, (unsigned int)&gFl1405ModelFile, (unsigned int)&gFl1406ModelFile, (unsigned int)&gFl1407ModelFile,
    (unsigned int)&gFl1408ModelFile, (unsigned int)&gFl1409ModelFile, (unsigned int)&gFl1410ModelFile, (unsigned int)&gFl1411ModelFile, (unsigned int)&gFl1412ModelFile, (unsigned int)&gFl1413ModelFile
};
#pragma section forcerodata end
