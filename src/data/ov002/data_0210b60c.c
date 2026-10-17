/* .data 0x0210b60c..0x0210b610 */
extern unsigned char data_ov085_02130744[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b60c[1] = {
    (unsigned int)&data_ov085_02130744
};
#pragma section forcedata end
#pragma pop
