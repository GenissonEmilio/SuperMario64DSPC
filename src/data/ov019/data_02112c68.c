/* .data 0x02112c68..0x02112c84 */
extern unsigned char data_ov019_02112d54[];
extern unsigned char data_ov019_02112ba8[];
extern unsigned char data_ov019_02112bd0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_02112c68[7] = {
    (unsigned int)&data_ov019_02112d54, (unsigned int)&data_ov019_02112ba8, 0x7c207c4, 0x7c607c5, (unsigned int)&data_ov019_02112bd0, 0x6400001, 15
};
#pragma section forcedata end
#pragma pop
