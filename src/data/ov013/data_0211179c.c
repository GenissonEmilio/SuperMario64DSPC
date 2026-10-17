/* .data 0x0211179c..0x021117a4 */
extern unsigned char data_ov013_021117c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_0211179c[2] = {
    261, (unsigned int)&data_ov013_021117c4
};
#pragma section forcedata end
#pragma pop
