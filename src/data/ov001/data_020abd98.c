/* .data 0x020abd98..0x020abda8 */
extern unsigned char data_ov001_020abf20[];
extern unsigned char data_ov001_020abdd8[];
extern unsigned char data_ov001_020ac078[];
extern unsigned char data_ov001_020abda8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov001_020abd98[4] = {
    (unsigned int)&data_ov001_020abf20, (unsigned int)&data_ov001_020abdd8, (unsigned int)&data_ov001_020ac078, (unsigned int)&data_ov001_020abda8
};
#pragma section forcedata end
#pragma pop
