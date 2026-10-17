/* .data 0x02111994..0x021119b0 */
extern unsigned char data_ov055_021119b0[];
extern unsigned char data_ov055_02111938[];
extern unsigned char data_ov055_02111940[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111994[7] = {
    (unsigned int)&data_ov055_021119b0, (unsigned int)&data_ov055_02111938, 0x71e0720, 0x7220721, (unsigned int)&data_ov055_02111940, 0x2260001, 15
};
#pragma section forcedata end
#pragma pop
