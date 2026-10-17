/* .data 0x0208e730..0x0208e738 */
extern unsigned char _ZN8dClipperD1Ev[];
extern unsigned char _ZN8dClipperD0Ev[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTV8dClipper[2] = {
    (unsigned int)&_ZN8dClipperD1Ev, (unsigned int)&_ZN8dClipperD0Ev
};
#pragma section forcedata end
#pragma pop
