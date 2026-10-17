/* .data 0x0213af18..0x0213af30 */
extern unsigned char Heyho_Motion0[];
extern unsigned char Heyho_Motion14[];
extern unsigned char Heyho_Motion1[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Heyho_Motion0[2] = {
    (unsigned int)&Heyho_Motion0, 0
};

unsigned int pmf_Heyho_Motion14[2] = {
    (unsigned int)&Heyho_Motion14, 0
};

unsigned int pmf_Heyho_Motion1[2] = {
    (unsigned int)&Heyho_Motion1, 0
};
#pragma section forcedata end
#pragma pop
