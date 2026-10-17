/* .data 0x0211cbc4..0x0211cc44 */
extern unsigned char data_ov075_0211cef4[];
extern unsigned char data_ov075_0211cf24[];
extern unsigned char data_ov075_0211cf54[];
extern unsigned char data_ov075_0211cf84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov075_0211cc04[32] ;

extern unsigned char data_ov075_0211cbe4[32] ;

unsigned char data_ov075_0211cbc4[32] = {
    216, 0, 240, 129, 67, 161, 0, 0, 216, 128, 16, 128,
    71, 161, 0, 0, 232, 0, 216, 193, 24, 160, 0, 0,
    232, 128, 0, 192, 139, 161, 255, 255
};

extern unsigned int data_ov075_0211cc24[8] ;
#pragma section forcedata end
#pragma pop
