/* .data 0x02111b44..0x02111b60 */
extern unsigned char data_ov043_02111d60[];
extern unsigned char data_ov043_02111b08[];
extern unsigned char data_ov043_02111b18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_02111b44[7] = {
    (unsigned int)&data_ov043_02111d60, (unsigned int)&data_ov043_02111b08, 0x76f0772, 0x7740773, (unsigned int)&data_ov043_02111b18, 0x6400001, 175
};
#pragma section forcedata end
#pragma pop
