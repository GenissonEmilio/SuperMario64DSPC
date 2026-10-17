/* .data 0x02111384..0x02111394 */
extern unsigned char data_ov011_02111620[];
extern unsigned char data_ov011_02111548[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_02111384[4] = {
    0x1300, (unsigned int)&data_ov011_02111620, 0x1b05, (unsigned int)&data_ov011_02111548
};
#pragma section forcedata end
#pragma pop
