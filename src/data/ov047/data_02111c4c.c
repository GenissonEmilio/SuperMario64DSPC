/* .data 0x02111c4c..0x02111cc8 */
extern unsigned char data_ov047_02111a40[];
extern unsigned char data_ov047_02111a08[];
extern unsigned char data_ov047_02111c14[];
extern unsigned char data_ov047_021119f0[];
extern unsigned char data_ov047_02111c84[];
extern unsigned char data_ov047_021119fc[];
extern unsigned char data_ov047_02111a20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov047_02111c4c[2] = {
    0x402, (unsigned int)&data_ov047_02111a40
};

extern unsigned int data_ov047_02111c54[12] ;

unsigned char data_ov047_02111c84[68] = {
    0, 0, 162, 229, 196, 240, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 2, 0, 0, 218, 228, 164, 237, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 106, 230,
    164, 237, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 112, 229, 164, 237, 200, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 94, 1
};
#pragma section forcedata end
#pragma pop
