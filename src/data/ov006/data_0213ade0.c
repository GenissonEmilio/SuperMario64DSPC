/* .data 0x0213ade0..0x0213ade8 */
extern unsigned char Presenter_StateAnim2[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Presenter_StateAnim2[2] = {
    (unsigned int)&Presenter_StateAnim2, 0
};
#pragma section forcedata end
#pragma pop
