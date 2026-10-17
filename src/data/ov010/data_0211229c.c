/* .data 0x0211229c..0x021122b8 */
extern unsigned char data_ov010_021126d0[];
extern unsigned char data_ov010_021121ec[];
extern unsigned char data_ov010_021124c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_0211229c[7] = {
    (unsigned int)&data_ov010_021126d0, (unsigned int)&data_ov010_021121ec, 0x6e806f0, 0x6f206f1, (unsigned int)&data_ov010_021124c0, 0x6400008, 15
};
#pragma section forcedata end
#pragma pop
