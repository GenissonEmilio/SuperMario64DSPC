/* .data 0x02111530..0x0211155c */
extern unsigned char data_ov059_021111e0[];
extern unsigned char data_ov059_021111a8[];
extern unsigned char data_ov059_021111a4[];
extern unsigned char data_ov059_021111a0[];
extern unsigned char data_ov059_02111690[];
extern unsigned char data_ov059_021114cc[];
extern unsigned char data_ov059_021114e8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov059_0211153c[3] = {
    (unsigned int)&data_ov059_021111e0, 2, (unsigned int)&data_ov059_021111a8
};

unsigned int data_ov059_02111530[3] = {
    91, (unsigned int)&data_ov059_021111a4, (unsigned int)&data_ov059_021111a0
};

unsigned int data_ov059_02111548[5] = {
    (unsigned int)&data_ov059_02111690, (unsigned int)&data_ov059_021114cc, 0x88008802U, 0x88048803U, (unsigned int)&data_ov059_021114e8
};
#pragma section forcedata end
#pragma pop
