/* .data 0x02111470..0x02111498 */
extern unsigned char data_ov039_02111454[];
extern unsigned char data_ov039_02111400[];
extern unsigned char data_ov039_02111498[];
extern unsigned char data_ov039_02111404[];
extern unsigned char data_ov039_02111408[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_02111470[10] = {
    516, (unsigned int)&data_ov039_02111454, 267, (unsigned int)&data_ov039_02111400, 0x401, (unsigned int)&data_ov039_02111498, 268, (unsigned int)&data_ov039_02111404,
    270, (unsigned int)&data_ov039_02111408
};
#pragma section forcedata end
#pragma pop
