/* .data 0x02111bc8..0x02111bd4 */
extern unsigned char data_ov033_021116d0[];
extern unsigned char data_ov033_021116c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov033_02111bc8[3] = {
    91, (unsigned int)&data_ov033_021116d0, (unsigned int)&data_ov033_021116c8
};
#pragma section forcedata end
#pragma pop
