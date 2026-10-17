/* .data 0x02113464..0x02113470 */
extern unsigned char data_ov015_02113450[];
extern unsigned char data_ov015_02113500[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_02113464[3] = {
    (unsigned int)&data_ov015_02113450, (unsigned int)&data_ov015_02113500, 0x27100000
};
#pragma section forcedata end
#pragma pop
