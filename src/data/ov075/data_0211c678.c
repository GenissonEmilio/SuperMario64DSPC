/* .data 0x0211c678..0x0211c688 */
extern unsigned char data_ov075_0211d394[];
extern unsigned char data_ov075_0211d3cc[];
extern unsigned char data_ov075_0211d39c[];
extern unsigned char data_ov075_0211d3d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211c678[4] = {
    (unsigned int)&data_ov075_0211d394, (unsigned int)&data_ov075_0211d3cc, (unsigned int)&data_ov075_0211d39c, (unsigned int)&data_ov075_0211d3d4
};
#pragma section forcedata end
#pragma pop
