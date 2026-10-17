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

unsigned int data_ov056_02112c18[3] = {
    (unsigned int)&data_ov056_02113054, 0x3a05, (unsigned int)&data_ov056_02112e84
};

unsigned char data_ov056_02112c24[16] = {
    109, 97, 116, 95, 110, 97, 103, 97, 114, 101, 95, 107,
    105, 119, 97, 0
};

unsigned int data_ov056_02112c34[4] = {
    541, (unsigned int)&data_ov056_021115cc, (unsigned int)&data_ov056_02111624, (unsigned int)&data_ov056_02111a60
};
#pragma section forcedata end
#pragma pop
