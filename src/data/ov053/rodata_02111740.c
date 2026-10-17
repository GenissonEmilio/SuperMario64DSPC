/* .rodata 0x02111740..0x02111760 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov053_02111740[16] = {
    19, 1, 0, 0, 127, 1, 0, 0, 200, 1, 0, 0,
    227, 1, 0, 0
};

unsigned char data_ov053_02111750[16] = {
    0, 0, 0, 0, 29, 254, 255, 255, 29, 254, 255, 255,
    29, 254, 255, 255
};
#pragma section forcerodata end
