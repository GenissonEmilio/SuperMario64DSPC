/* .rodata 0x0211c0a8..0x0211c0c8 */
extern unsigned char gCtMechaObj01aModelFile[];
extern unsigned char gCtMechaObj02aModelFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov065_0211c0b0[8] = {
    13, 0, 22, 0, 13, 0, 0, 0
};

unsigned int data_ov065_0211c0a8[2] = {
    (unsigned int)&gCtMechaObj01aModelFile, (unsigned int)&gCtMechaObj02aModelFile
};

unsigned char data_ov065_0211c0b8[16] = {
    0, 16, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};
#pragma section forcerodata end
