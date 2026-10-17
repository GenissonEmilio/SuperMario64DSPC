/* .data 0x02112888..0x02112890 */
extern unsigned char data_ov024_02112a7c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov024_02112888[2] = {
    9, (unsigned int)&data_ov024_02112a7c
};
#pragma section forcedata end
#pragma pop
