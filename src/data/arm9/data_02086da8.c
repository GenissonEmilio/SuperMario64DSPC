/* .data 0x02086da8..0x02086db0 */
extern unsigned char func_02009e50[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086da8[2] = {
    (unsigned int)&func_02009e50, 0
};
#pragma section forcedata end
#pragma pop
