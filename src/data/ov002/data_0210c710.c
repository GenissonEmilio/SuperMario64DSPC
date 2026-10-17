/* .data 0x0210c710..0x0210c754 */
extern unsigned char data_ov002_0210c740[];
extern unsigned char data_ov002_0210c738[];
extern unsigned char data_ov002_0210c730[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov002_0210c740[8] = {
    248, 0, 248, 65, 64, 161, 255, 255
};

unsigned char data_ov002_0210c738[8] = {
    248, 0, 248, 65, 66, 177, 255, 255
};

unsigned char data_ov002_0210c730[8] = {
    248, 0, 248, 65, 68, 193, 255, 255
};

unsigned char _ZN3OAM25SMALL_ARROW_POINTING_LEFTE[8] = {
    248, 0, 248, 65, 144, 241, 255, 255
};

unsigned char _ZN3OAM26SMALL_ARROW_POINTING_RIGHTE[8] = {
    248, 0, 248, 65, 208, 241, 255, 255
};

unsigned char _ZN3OAM9TINY_STARE[8] = {
    248, 0, 248, 65, 210, 241, 255, 255
};

unsigned char _ZN3OAM8MM_ARROWE[8] = {
    220, 0, 248, 65, 70, 241, 255, 255
};

unsigned int data_ov002_0210c748[3] = {
    (unsigned int)&data_ov002_0210c740, (unsigned int)&data_ov002_0210c738, (unsigned int)&data_ov002_0210c730
};
#pragma section forcedata end
#pragma pop
