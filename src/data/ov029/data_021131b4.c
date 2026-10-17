/* .data 0x021131b4..0x02113204 */
extern unsigned char data_ov029_021136cc[];
extern unsigned char data_ov029_021132c4[];
extern unsigned char data_ov029_02112f08[];
extern unsigned char data_ov029_02112f68[];
extern unsigned char data_ov029_02112f38[];
extern unsigned char data_ov029_02112f28[];
extern unsigned char data_ov029_02112f48[];
extern unsigned char data_ov029_02112f18[];
extern unsigned char data_ov029_02112f58[];
extern unsigned char data_ov029_021130cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov029_021131b4[20] = {
    0x5100, (unsigned int)&data_ov029_021136cc, 0x2205, (unsigned int)&data_ov029_021132c4, 288, (unsigned int)&data_ov029_02112f08, 320, (unsigned int)&data_ov029_02112f68,
    352, (unsigned int)&data_ov029_02112f38, 384, (unsigned int)&data_ov029_02112f28, 416, (unsigned int)&data_ov029_02112f48, 448, (unsigned int)&data_ov029_02112f18,
    480, (unsigned int)&data_ov029_02112f58, 0x6e5, (unsigned int)&data_ov029_021130cc
};
#pragma section forcedata end
#pragma pop
