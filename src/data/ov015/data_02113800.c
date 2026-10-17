/* .data 0x02113800..0x02113820 */
extern unsigned char data_ov015_02113444[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov015_02113800[1] ;

unsigned char data_ov015_02113804[28] = {
    0, 0, 28, 12, 158, 7, 48, 17, 0, 0, 0, 64,
    0, 0, 8, 5, 0, 0, 28, 12, 158, 7, 248, 17,
    0, 0, 0, 64
};
#pragma section forcedata end
#pragma pop
