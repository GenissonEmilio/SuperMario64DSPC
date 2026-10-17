/* .data 0x0213adc0..0x0213adc8 */
extern unsigned char Presenter_StateAnim7[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Presenter_StateAnim7[2] = {
    (unsigned int)&Presenter_StateAnim7, 0
};
#pragma section forcedata end
#pragma pop
