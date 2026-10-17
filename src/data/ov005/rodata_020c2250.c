/* .rodata 0x020c2250..0x020c2280 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char sMiniGmGroupBases[16] = {
    3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    2, 0, 0, 0
};

unsigned char sMiniGmBgFiles[32] = {
    80, 0, 0, 0, 79, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 85, 0, 0, 0, 84, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0
};
#pragma section forcerodata end
