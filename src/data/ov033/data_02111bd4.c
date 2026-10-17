/* .data 0x02111bd4..0x02111be0 */
extern unsigned char data_ov033_0211187c[];
extern unsigned char data_ov033_021116d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov033_02111bd4[3] = {
    (unsigned int)&data_ov033_0211187c, 1, (unsigned int)&data_ov033_021116d8
};
#pragma section forcedata end
#pragma pop
