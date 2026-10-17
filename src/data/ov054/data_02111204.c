/* .data 0x02111204..0x02111238 */
extern unsigned char data_ov054_02111458[];
extern unsigned char data_ov054_021114b0[];
extern unsigned char data_ov054_02111ae8[];
extern unsigned char data_ov054_02111268[];
extern unsigned char data_ov054_021118f8[];
extern unsigned char data_ov054_02111280[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111204[4] = {
    20, 5, 0, 0
};

unsigned int data_ov054_02111210[2] = {
    0xb05, (unsigned int)&data_ov054_02111458
};

unsigned int data_ov054_02111208[2] = {
    0x600, (unsigned int)&data_ov054_021114b0
};

extern unsigned int data_ov054_02111218[4] ;

extern unsigned int data_ov054_02111228[4] ;
#pragma section forcedata end
#pragma pop
