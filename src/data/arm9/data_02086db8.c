/* .data 0x02086db8..0x02086dc0 */
extern unsigned char func_02009d90[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086db8[2] = {
    (unsigned int)&func_02009d90, 0
};
#pragma section forcedata end
#pragma pop
