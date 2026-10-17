/* .data 0x02112ba8..0x02112bd4 */
extern unsigned char data_ov025_02112c68[];
extern unsigned char data_ov025_02112b4c[];
extern unsigned char data_ov025_02112b54[];
extern unsigned char data_ov025_02112bd4[];
extern unsigned char data_ov025_02112b44[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov025_02112ba8[4] = {
    156, 255, 168, 253
};

unsigned int data_ov025_02112bac[4] = {
    512, (unsigned int)&data_ov025_02112c68, 261, (unsigned int)&data_ov025_02112b4c
};

unsigned int data_ov025_02112bbc[6] = {
    (unsigned int)&data_ov025_02112b54, (unsigned int)&data_ov025_02112bd4, 0x17700000, (unsigned int)&data_ov025_02112b44, 0, 0x17700003
};
#pragma section forcedata end
#pragma pop
