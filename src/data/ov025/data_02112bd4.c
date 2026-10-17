/* .data 0x02112bd4..0x02112c08 */
extern unsigned char data_ov025_02112658[];
extern unsigned char data_ov025_02112654[];
extern unsigned char data_ov025_02112694[];
extern unsigned char data_ov025_0211265c[];
extern unsigned char data_ov025_02113404[];
extern unsigned char data_ov025_02112b5c[];
extern unsigned char data_ov025_02112bbc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_02112bd4[2] = {
    91, (unsigned int)&data_ov025_02112658
};

unsigned int data_ov025_02112bdc[4] = {
    (unsigned int)&data_ov025_02112654, (unsigned int)&data_ov025_02112694, 2, (unsigned int)&data_ov025_0211265c
};

unsigned int data_ov025_02112bec[7] = {
    (unsigned int)&data_ov025_02113404, (unsigned int)&data_ov025_02112b5c, 0x716071b, 0x71d071c, (unsigned int)&data_ov025_02112bbc, 0x5780002, 15
};
#pragma section forcedata end
#pragma pop
