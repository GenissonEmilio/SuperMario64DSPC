/* .data 0x0210b610..0x0210b614 */
extern unsigned char data_ov002_02110bf8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b610[1] = {
    (unsigned int)&data_ov002_02110bf8
};
#pragma section forcedata end
#pragma pop
