/* .data 0x02092824..0x0209283c */
extern unsigned char func_0203128c[];
extern unsigned char func_02031154[];
extern unsigned char func_020313d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02092824[12] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0
};

unsigned int data_02092830[3] = {
    (unsigned int)&func_0203128c, (unsigned int)&func_02031154, (unsigned int)&func_020313d8
};
#pragma section forcedata end
#pragma pop
