/* .data 0x020991d8..0x020991e0 */
extern unsigned char _ZN5dBgChD1Ev[];
extern unsigned char _ZN5dBgChD0Ev[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTV5dBgCh[2] = {
    (unsigned int)&_ZN5dBgChD1Ev, (unsigned int)&_ZN5dBgChD0Ev
};
#pragma section forcedata end
#pragma pop
