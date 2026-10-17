/* .data 0x02113da4..0x02113da8 */
extern unsigned char gFlKomaDModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov022_02113da4[1] = {
    (unsigned int)&gFlKomaDModelFile
};
#pragma section forcedata end
#pragma pop
