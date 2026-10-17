/* .data 0x02112c14..0x02112c44 */
extern unsigned char data_ov056_02113054[];
extern unsigned char data_ov056_02112e84[];
extern unsigned char data_ov056_021115cc[];
extern unsigned char data_ov056_02111624[];
extern unsigned char data_ov056_02111a60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov056_02112c14[4] = {
    0, 44, 0, 0
};

extern unsigned int data_ov056_02112c18[3] ;

extern unsigned char data_ov056_02112c24[16] ;

extern unsigned int data_ov056_02112c34[4] ;
#pragma section forcedata end
#pragma pop
