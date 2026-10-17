/* .data 0x02138bd0..0x02138bf4 */
extern unsigned char data_ov006_02138bd4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02138bd0[1] ;

unsigned char data_ov006_02138bd4[32] = {
    248, 64, 212, 129, 205, 112, 0, 0, 248, 64, 244, 129,
    209, 112, 0, 0, 248, 0, 20, 64, 213, 112, 0, 0,
    248, 128, 36, 0, 215, 112, 255, 255
};
#pragma section forcedata end
#pragma pop
