/* .data 0x02112434..0x02112494 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov052_02112434[4] ;

extern unsigned char data_ov052_02112438[20] ;

extern unsigned char data_ov052_0211244c[24] ;

unsigned char data_ov052_02112464[48] = {
    5, 0, 32, 3, 42, 18, 206, 230, 0, 0, 0, 0,
    0, 0, 50, 255, 15, 0, 130, 251, 160, 15, 222, 244,
    0, 0, 0, 0, 0, 0, 255, 255, 254, 0, 76, 4,
    160, 15, 36, 250, 0, 0, 0, 0, 0, 0, 4, 0
};
#pragma section forcedata end
#pragma pop
