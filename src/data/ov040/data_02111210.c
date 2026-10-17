/* .data 0x02111210..0x02111290 */
extern unsigned char data_ov040_02111310[];
extern unsigned char data_ov040_021111dc[];
extern unsigned char data_ov040_021111e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov040_02111210[8] = {
    108, 238, 216, 245, 128, 12, 108, 238
};

unsigned char data_ov040_02111218[16] = {
    216, 245, 68, 22, 108, 238, 240, 10, 68, 22, 108, 238,
    240, 10, 128, 12
};

unsigned int data_ov040_02111228[7] = {
    (unsigned int)&data_ov040_02111310, (unsigned int)&data_ov040_021111dc, 0x75a075c, 0x75e075d, (unsigned int)&data_ov040_021111e4, 0x5780101, 15
};

unsigned char data_ov040_02111244[32] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov040_02111264[44] = {
    2, 255, 34, 232, 200, 23, 224, 236, 0, 0, 0, 128,
    0, 0, 2, 255, 52, 239, 56, 4, 140, 10, 0, 0,
    0, 128, 0, 0, 6, 0, 76, 235, 216, 245, 208, 7,
    0, 0, 0, 192, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
