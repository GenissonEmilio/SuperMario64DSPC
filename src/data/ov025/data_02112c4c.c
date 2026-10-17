/* .data 0x02112c4c..0x02112c58 */
extern unsigned char data_ov025_02113154[];
extern unsigned char data_ov025_02112fec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_02112c4c[3] = {
    (unsigned int)&data_ov025_02113154, 0x2d05, (unsigned int)&data_ov025_02112fec
};
#pragma section forcedata end
#pragma pop
