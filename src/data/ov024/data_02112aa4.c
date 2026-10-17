/* .data 0x02112aa4..0x02112ac0 */
extern unsigned char data_ov024_02112958[];
extern unsigned char data_ov024_021128f8[];
extern unsigned char data_ov024_02112884[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02112aa4[4] = {
    6, 2, 0, 0
};

unsigned int data_ov024_02112aa8[6] = {
    (unsigned int)&data_ov024_02112958, 519, (unsigned int)&data_ov024_021128f8, 270, (unsigned int)&data_ov024_02112884, 522
};
#pragma section forcedata end
#pragma pop
