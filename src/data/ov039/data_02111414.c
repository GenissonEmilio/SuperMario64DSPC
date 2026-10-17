/* .data 0x02111414..0x0211141c */
extern unsigned char data_ov039_02111428[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_02111414[2] = {
    2, (unsigned int)&data_ov039_02111428
};
#pragma section forcedata end
#pragma pop
