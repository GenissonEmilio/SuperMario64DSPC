/* .data 0x02086d30..0x02086d38 */
extern unsigned char func_02009e70[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d30[2] = {
    (unsigned int)&func_02009e70, 0
};
#pragma section forcedata end
#pragma pop
