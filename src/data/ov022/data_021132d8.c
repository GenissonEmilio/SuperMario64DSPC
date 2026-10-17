/* .data 0x021132d8..0x02113344 */
extern unsigned char data_ov022_021136f8[];
extern unsigned char data_ov022_021133a8[];
extern unsigned char data_ov022_021131a8[];
extern unsigned char data_ov022_021131b8[];
extern unsigned char data_ov022_02113150[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov022_021132d8[20] = {
    0, 0, 90, 241, 58, 7, 6, 24, 0, 0, 0, 64,
    0, 0, 0, 5, 0, 0, 240, 241
};

unsigned char data_ov022_021132ec[44] = {
    150, 0, 112, 23, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 240, 241, 150, 0, 106, 24, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 196, 240, 150, 0, 106, 24,
    0, 0, 0, 64, 0, 0, 0, 0
};

unsigned int data_ov022_02113318[11] = {
    0x5d00, (unsigned int)&data_ov022_021136f8, 0x6a05, (unsigned int)&data_ov022_021133a8, 352, (unsigned int)&data_ov022_021131a8, 416, (unsigned int)&data_ov022_021131b8,
    421, (unsigned int)&data_ov022_02113150, 448
};
#pragma section forcedata end
#pragma pop
