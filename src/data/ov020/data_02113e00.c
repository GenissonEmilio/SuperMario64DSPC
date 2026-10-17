/* .data 0x02113e00..0x02113e50 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov020_02113e00[32] ;

unsigned char data_ov020_02113e20[48] = {
    68, 0, 190, 251, 160, 246, 66, 4, 0, 0, 0, 96,
    0, 0, 1, 2, 10, 1, 158, 2, 44, 247, 178, 253,
    0, 0, 0, 224, 0, 0, 255, 255, 67, 0, 190, 251,
    210, 246, 66, 4, 0, 0, 0, 96, 0, 0, 3, 255
};
#pragma section forcedata end
#pragma pop
