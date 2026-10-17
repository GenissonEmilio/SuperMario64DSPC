/* .data 0x021111fc..0x02111210 */
extern unsigned char data_ov050_02111318[];
extern unsigned char data_ov050_021111cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_021111fc[8] = {
    34, 11, 232, 3, 0, 0, 160, 246
};

unsigned int data_ov050_02111204[3] = {
    (unsigned int)&data_ov050_02111318, (unsigned int)&data_ov050_021111cc, 0x94009402U
};
#pragma section forcedata end
#pragma pop
