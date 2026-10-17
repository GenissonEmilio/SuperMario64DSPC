/* .data 0x02112bdc..0x02112c08 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02112be4[8] = {
    0, 0, 4, 255, 255, 255, 4, 0
};

extern unsigned char data_ov024_02112bdc[8] ;

extern unsigned char data_ov024_02112bec[28] ;
#pragma section forcedata end
#pragma pop
