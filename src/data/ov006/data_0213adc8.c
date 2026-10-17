/* .data 0x0213adc8..0x0213add0 */
extern unsigned char Presenter_StateIdle[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Presenter_StateIdle_2[2] = {
    (unsigned int)&Presenter_StateIdle, 0
};
#pragma section forcedata end
#pragma pop
