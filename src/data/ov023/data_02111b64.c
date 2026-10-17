/* .data 0x02111b64..0x02111b68 */
extern unsigned char data_ov023_02111e10[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov023_02111b64[1] = {
    (unsigned int)&data_ov023_02111e10
};
#pragma section forcedata end
#pragma pop
