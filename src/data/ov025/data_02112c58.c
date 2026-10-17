/* .data 0x02112c58..0x02112c68 */
extern unsigned char data_ov025_02112b9c[];
extern unsigned char data_ov025_02112d68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_02112c58[4] = {
    613, (unsigned int)&data_ov025_02112b9c, 0x6c5, (unsigned int)&data_ov025_02112d68
};
#pragma section forcedata end
#pragma pop
