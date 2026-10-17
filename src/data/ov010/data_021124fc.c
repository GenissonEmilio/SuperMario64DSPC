/* .data 0x021124fc..0x02112520 */
extern unsigned char data_ov010_02112204[];
extern unsigned char data_ov010_0211222c[];
extern unsigned char data_ov010_0211220c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021124fc[9] = {
    (unsigned int)&data_ov010_02112204, 0, 0x28a0200, (unsigned int)&data_ov010_0211222c, 0, 0x4b00300, (unsigned int)&data_ov010_0211220c, 0,
    0x4b00300
};
#pragma section forcedata end
#pragma pop
