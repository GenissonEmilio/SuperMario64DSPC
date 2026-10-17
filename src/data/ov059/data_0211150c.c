/* .data 0x0211150c..0x02111530 */
extern unsigned char data_ov059_02111818[];
extern unsigned char data_ov059_02111750[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov059_0211150c[4] = {
    0, 0, 0, 0
};

unsigned char data_ov059_02111510[16] = {
    2, 255, 80, 251, 138, 2, 76, 29, 0, 0, 0, 128,
    0, 0, 0, 0
};

unsigned int data_ov059_02111520[4] = {
    0xf00, (unsigned int)&data_ov059_02111818, 0x1905, (unsigned int)&data_ov059_02111750
};
#pragma section forcedata end
#pragma pop
