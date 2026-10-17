/* .data 0x0210cab0..0x0210cad4 */
extern unsigned char data_ov002_0210cac0[];
extern unsigned char data_ov002_0210cab8[];
extern unsigned char data_ov002_0210cab0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov002_0210cac0[8] = {
    248, 0, 248, 65, 64, 225, 255, 255
};

unsigned char data_ov002_0210cab8[8] = {
    248, 0, 248, 65, 66, 225, 255, 255
};

unsigned char data_ov002_0210cab0[8] = {
    248, 0, 248, 65, 68, 241, 255, 255
};

unsigned int data_ov002_0210cac8[3] = {
    (unsigned int)&data_ov002_0210cac0, (unsigned int)&data_ov002_0210cab8, (unsigned int)&data_ov002_0210cab0
};
#pragma section forcedata end
#pragma pop
