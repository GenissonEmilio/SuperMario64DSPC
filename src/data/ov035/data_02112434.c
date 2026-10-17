/* .data 0x02112434..0x02112494 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov035_02112434[4] ;

extern unsigned char data_ov035_02112438[20] ;

extern unsigned char data_ov035_0211244c[24] ;

unsigned char data_ov035_02112464[48] = {
    38, 194, 200, 0, 162, 244, 128, 7, 38, 194, 29, 3,
    222, 244, 128, 7, 38, 194, 19, 5, 93, 243, 136, 5,
    38, 194, 185, 6, 93, 243, 226, 3, 63, 12, 164, 6,
    204, 237, 188, 2, 39, 34, 0, 0, 236, 255, 236, 250
};
#pragma section forcedata end
#pragma pop
