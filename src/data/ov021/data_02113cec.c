/* .data 0x02113cec..0x02113d70 */
extern unsigned char data_ov021_021137d0[];
extern unsigned char data_ov021_021137a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov021_02113cec[2] ;

extern unsigned int data_ov021_02113cf4[5] ;

unsigned char data_ov021_02113d08[40] = {
    37, 226, 134, 11, 200, 0, 244, 1, 37, 226, 240, 10,
    200, 0, 244, 1, 37, 226, 90, 10, 200, 0, 244, 1,
    37, 226, 196, 9, 200, 0, 244, 1, 37, 226, 46, 9,
    200, 0, 244, 1
};

extern unsigned char data_ov021_02113d30[64] ;
#pragma section forcedata end
#pragma pop
