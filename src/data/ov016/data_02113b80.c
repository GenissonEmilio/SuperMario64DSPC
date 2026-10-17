/* .data 0x02113b80..0x02113b90 */
extern unsigned char data_ov016_0211354c[];
extern unsigned char data_ov016_02113570[];
extern unsigned char data_ov016_02113554[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_02113b80[4] = {
    (unsigned int)&data_ov016_0211354c, (unsigned int)&data_ov016_02113570, 1, (unsigned int)&data_ov016_02113554
};
#pragma section forcedata end
#pragma pop
