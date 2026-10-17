/* .data 0x0213adf8..0x0213ae00 */
extern unsigned char Presenter_StateAnim4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Presenter_StateAnim4[2] = {
    (unsigned int)&Presenter_StateAnim4, 0
};
#pragma section forcedata end
#pragma pop
