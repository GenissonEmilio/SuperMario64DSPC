/* .data 0x02122e5c..0x02122e78 */
extern unsigned char data_ov009_02112404[];
extern unsigned char data_ov009_0211244c[];
extern unsigned char data_ov010_02112494[];
extern unsigned char data_ov010_021124c4[];
extern unsigned char data_ov010_02112464[];
extern unsigned char data_ov009_02112434[];
extern unsigned char data_ov010_021124ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov074_02122e5c[7] = {
    (unsigned int)&data_ov009_02112404, (unsigned int)&data_ov009_0211244c, (unsigned int)&data_ov010_02112494, (unsigned int)&data_ov010_021124c4, (unsigned int)&data_ov010_02112464, (unsigned int)&data_ov009_02112434, (unsigned int)&data_ov010_021124ac
};
#pragma section forcedata end
#pragma pop
