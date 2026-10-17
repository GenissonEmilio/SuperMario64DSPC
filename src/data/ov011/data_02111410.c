/* .data 0x02111410..0x02111438 */
extern unsigned char data_ov011_02111490[];
extern unsigned char data_ov011_0211136c[];
extern unsigned char data_ov011_021113e4[];
extern unsigned char data_ov011_02111340[];
extern unsigned char data_ov011_021114d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_02111410[10] = {
    0xc02, (unsigned int)&data_ov011_02111490, 515, (unsigned int)&data_ov011_0211136c, 772, (unsigned int)&data_ov011_021113e4, 267, (unsigned int)&data_ov011_02111340,
    0x701, (unsigned int)&data_ov011_021114d8
};
#pragma section forcedata end
#pragma pop
