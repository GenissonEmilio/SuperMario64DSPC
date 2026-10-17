/* .data 0x02113794..0x0211379c */
extern unsigned char data_ov020_02113c18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113794[2] = {
    9, (unsigned int)&data_ov020_02113c18
};
#pragma section forcedata end
#pragma pop
