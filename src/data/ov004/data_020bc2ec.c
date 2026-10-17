/* .data 0x020bc2ec..0x020bc300 */
extern unsigned char data_ov004_020b9e50[];
extern unsigned char data_ov004_020b9e4c[];
extern unsigned char data_ov004_020ba018[];
extern unsigned char data_ov004_020b9fd4[];
extern unsigned char data_ov004_020b9fb8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc2ec[5] = {
    (unsigned int)&data_ov004_020b9e50, (unsigned int)&data_ov004_020b9e4c, (unsigned int)&data_ov004_020ba018, (unsigned int)&data_ov004_020b9fd4, (unsigned int)&data_ov004_020b9fb8
};
#pragma section forcedata end
#pragma pop
