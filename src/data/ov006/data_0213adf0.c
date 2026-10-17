/* .data 0x0213adf0..0x0213adf8 */
extern unsigned char Presenter_StateAnim1[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Presenter_StateAnim1[2] = {
    (unsigned int)&Presenter_StateAnim1, 0
};
#pragma section forcedata end
#pragma pop
