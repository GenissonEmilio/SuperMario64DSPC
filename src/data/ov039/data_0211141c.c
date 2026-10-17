/* .data 0x0211141c..0x02111428 */
extern unsigned char data_ov039_02111414[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_0211141c[3] = {
    (unsigned int)&data_ov039_02111414, 0, 0x1b580000
};
#pragma section forcedata end
#pragma pop
