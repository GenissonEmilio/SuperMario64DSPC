/* .data 0x021111fc..0x02111210 */
extern unsigned char data_ov040_021114e0[];
extern unsigned char data_ov040_02111370[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov040_02111200[4] = {
    0, 35, 0, 0
};

unsigned char data_ov040_021111fc[4] = {
    255, 0, 0, 0
};

unsigned int data_ov040_02111204[3] = {
    (unsigned int)&data_ov040_021114e0, 0x2e05, (unsigned int)&data_ov040_02111370
};
#pragma section forcedata end
#pragma pop
