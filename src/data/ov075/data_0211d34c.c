/* .data 0x0211d34c..0x0211d374 */
extern unsigned char func_ov075_0211b260[];
extern unsigned char func_ov075_0211b1cc[];
extern unsigned char func_ov075_0211afb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211d354[2] = {
    (unsigned int)&func_ov075_0211b260, 0
};

unsigned int data_ov075_0211d34c[2] = {
    (unsigned int)&func_ov075_0211b1cc, 0
};

unsigned int data_ov075_0211d35c[6] = {
    (unsigned int)&func_ov075_0211afb0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
