/* .data 0x02111358..0x02111360 */
extern unsigned char data_ov011_02111410[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_02111358[2] = {
    8, (unsigned int)&data_ov011_02111410
};
#pragma section forcedata end
#pragma pop
