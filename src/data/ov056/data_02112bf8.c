/* .data 0x02112bf8..0x02112c04 */
extern unsigned char data_ov056_02112bd0[];
extern unsigned char data_ov056_02112c34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov056_02112bf8[3] = {
    (unsigned int)&data_ov056_02112bd0, (unsigned int)&data_ov056_02112c34, 0x27100000
};
#pragma section forcedata end
#pragma pop
