/* .data 0x0210b998..0x0210b9a8 */
extern unsigned char data_ov002_0210b658[];
extern unsigned char data_ov002_0210b630[];
extern unsigned char data_ov002_0210b638[];
extern unsigned char data_ov002_0210b6e8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b998[4] = {
    (unsigned int)&data_ov002_0210b658, (unsigned int)&data_ov002_0210b630, (unsigned int)&data_ov002_0210b638, (unsigned int)&data_ov002_0210b6e8
};
#pragma section forcedata end
#pragma pop
