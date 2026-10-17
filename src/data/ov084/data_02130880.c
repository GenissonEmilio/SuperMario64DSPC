/* .data 0x02130880..0x0213089c */
extern unsigned char data_ov084_02130178[];
extern unsigned char data_ov084_0213018c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov084_02130880[12] = {
    107, 117, 114, 105, 98, 111, 95, 97, 108, 108, 0, 0
};

unsigned int data_ov084_0213088c[4] = {
    17, (unsigned int)&data_ov084_02130178, 1, (unsigned int)&data_ov084_0213018c
};
#pragma section forcedata end
#pragma pop
