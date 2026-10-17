/* .data 0x020bc1a4..0x020bc1ac */
extern unsigned char Banner_DrawZoomB[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawZoomB[2] = {
    (unsigned int)&Banner_DrawZoomB, 0
};
#pragma section forcedata end
#pragma pop
