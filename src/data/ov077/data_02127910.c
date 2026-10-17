/* .data 0x02127910..0x02127918 */
extern unsigned char func_ov077_02125bb4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov077_02127910[2] = {
    (unsigned int)&func_ov077_02125bb4, 0
};
#pragma section forcedata end
#pragma pop
