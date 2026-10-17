/* .data 0x0211190c..0x02111928 */
extern unsigned char data_ov013_02111780[];
extern unsigned char data_ov013_02111a3c[];
extern unsigned char data_ov013_02111784[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov013_0211190c[3] ;

unsigned int data_ov013_02111918[4] = {
    0, 0, 0x6ef0100, (unsigned int)&data_ov013_02111784
};
#pragma section forcedata end
#pragma pop
