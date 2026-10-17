/* .data 0x02111218..0x02111228 */
extern unsigned char data_ov042_02111264[];
extern unsigned char data_ov042_021111d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov042_02111218[4] = {
    (unsigned int)&data_ov042_02111264, (unsigned int)&data_ov042_021111d4, 0x7ae07b0, 0x7b207b1
};
#pragma section forcedata end
#pragma pop
