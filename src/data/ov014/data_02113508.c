/* .data 0x02113508..0x02113550 */
extern unsigned char data_ov014_02113ab0[];
extern unsigned char data_ov014_021133ec[];
extern unsigned char data_ov014_02113490[];
extern unsigned char data_ov014_02113380[];
extern unsigned char data_ov014_021134c8[];
extern unsigned char data_ov014_02113470[];
extern unsigned char data_ov014_02113450[];
extern unsigned char data_ov014_021133a8[];
extern unsigned char data_ov014_02113384[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov014_02113508[4] = {
    0x3102, (unsigned int)&data_ov014_02113ab0, 0x403, (unsigned int)&data_ov014_021133ec
};

unsigned int data_ov014_02113518[7] = {
    0x404, (unsigned int)&data_ov014_02113490, 267, (unsigned int)&data_ov014_02113380, 0x401, (unsigned int)&data_ov014_021134c8, 0x406
};

unsigned int data_ov014_02113534[7] = {
    (unsigned int)&data_ov014_02113470, 0x407, (unsigned int)&data_ov014_02113450, 264, (unsigned int)&data_ov014_021133a8, 270, (unsigned int)&data_ov014_02113384
};
#pragma section forcedata end
#pragma pop
