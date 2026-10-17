/* .data 0x02113dc4..0x02113e50 */
extern unsigned char data_ov016_02113b38[];
extern unsigned char data_ov016_02113b58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov016_02113dc4[4] ;

unsigned char data_ov016_02113dd4[44] = {
    67, 76, 80, 83, 8, 0, 13, 0, 192, 15, 4, 0,
    255, 0, 0, 0, 200, 15, 4, 0, 255, 0, 0, 0,
    196, 15, 4, 0, 255, 0, 0, 0, 197, 15, 4, 0,
    255, 0, 0, 0, 204, 15, 4, 0
};

extern unsigned char data_ov016_02113e00[80] ;
#pragma section forcedata end
#pragma pop
