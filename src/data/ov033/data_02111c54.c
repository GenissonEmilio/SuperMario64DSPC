/* .data 0x02111c54..0x02111cb8 */
extern unsigned char data_ov033_02111f9c[];
extern unsigned char data_ov033_02111ee4[];
extern unsigned char data_ov033_02111b8c[];
extern unsigned char data_ov033_02111b2c[];
extern unsigned char data_ov033_02111b4c[];
extern unsigned char data_ov033_02111b3c[];
extern unsigned char data_ov033_02111b0c[];
extern unsigned char data_ov033_02111b5c[];
extern unsigned char data_ov033_02111b6c[];
extern unsigned char data_ov033_02111b7c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov033_02111c54[20] = {
    24, 6, 255, 0, 108, 7, 112, 254, 142, 249, 0, 192,
    0, 0, 24, 7, 255, 0, 0, 0
};

unsigned int data_ov033_02111c68[20] = {
    0x3a00, (unsigned int)&data_ov033_02111f9c, 0x1705, (unsigned int)&data_ov033_02111ee4, 288, (unsigned int)&data_ov033_02111b8c, 320, (unsigned int)&data_ov033_02111b2c,
    352, (unsigned int)&data_ov033_02111b4c, 384, (unsigned int)&data_ov033_02111b3c, 389, (unsigned int)&data_ov033_02111b0c, 416, (unsigned int)&data_ov033_02111b5c,
    448, (unsigned int)&data_ov033_02111b6c, 480, (unsigned int)&data_ov033_02111b7c
};
#pragma section forcedata end
#pragma pop
