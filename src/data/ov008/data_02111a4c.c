/* .data 0x02111a4c..0x02111abc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111a4c[12] = {
    0, 0, 106, 19, 37, 226, 60, 15, 0, 0, 6, 19
};

extern unsigned char data_ov008_02111a58[32] ;

extern unsigned char data_ov008_02111a78[68] ;
#pragma section forcedata end
#pragma pop
