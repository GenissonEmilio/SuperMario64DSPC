/* .data 0x02113434..0x02113450 */
extern unsigned char data_ov014_021139d0[];
extern unsigned char data_ov014_021133a0[];
extern unsigned char data_ov014_021133b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov014_02113434[7] = {
    (unsigned int)&data_ov014_021139d0, (unsigned int)&data_ov014_021133a0, 0x6e306e5, 0x6e706e6, (unsigned int)&data_ov014_021133b0, 0x6400001, 31
};
#pragma section forcedata end
#pragma pop
