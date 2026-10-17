/* .data 0x02112a6c..0x02112aa4 */
extern unsigned char data_ov024_02112d00[];
extern unsigned char data_ov024_02112be4[];
extern unsigned char data_ov024_02112a10[];
extern unsigned char data_ov024_02112880[];
extern unsigned char data_ov024_02112a3c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02112a6c[16] = {
    0, 0, 188, 2, 37, 0, 200, 25, 0, 0, 0, 64,
    0, 0, 8, 0
};

unsigned int data_ov024_02112a7c[10] = {
    0x6002, (unsigned int)&data_ov024_02112d00, 0x2f03, (unsigned int)&data_ov024_02112be4, 772, (unsigned int)&data_ov024_02112a10, 267, (unsigned int)&data_ov024_02112880,
    0x401, (unsigned int)&data_ov024_02112a3c
};
#pragma section forcedata end
#pragma pop
