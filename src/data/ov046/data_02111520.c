/* .data 0x02111520..0x02111524 */
extern unsigned char data_ov046_02111524[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov046_02111520[1] = {
    (unsigned int)&data_ov046_02111524
};
#pragma section forcedata end
#pragma pop
