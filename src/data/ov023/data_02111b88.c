/* .data 0x02111b88..0x02111ba4 */
extern unsigned char data_ov023_02111c38[];
extern unsigned char data_ov023_02111b38[];
extern unsigned char data_ov023_02111b48[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov023_02111b88[7] = {
    (unsigned int)&data_ov023_02111c38, (unsigned int)&data_ov023_02111b38, 0x7450748, 0x74a0749, (unsigned int)&data_ov023_02111b48, 0x2580001, 15
};
#pragma section forcedata end
#pragma pop
