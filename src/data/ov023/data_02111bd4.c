/* .data 0x02111bd4..0x02111c20 */
extern unsigned char data_ov023_02111ba4[];
extern unsigned char data_ov023_02111b20[];
extern unsigned char data_ov023_02111bf8[];
extern unsigned char data_ov023_02111b40[];
extern unsigned char data_ov023_02111b24[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov023_02111bd4[3] ;

extern unsigned int data_ov023_02111be0[6] ;

unsigned char data_ov023_02111bf8[40] = {
    0, 0, 124, 252, 8, 7, 24, 252, 0, 0, 85, 85,
    0, 0, 8, 2, 0, 0, 130, 251, 100, 0, 124, 252,
    0, 0, 85, 85, 0, 0, 8, 0, 0, 0, 24, 252,
    100, 0, 18, 253
};
#pragma section forcedata end
#pragma pop
