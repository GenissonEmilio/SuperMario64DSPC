/* .data 0x0209a744..0x0209a74c */
extern unsigned char _ZNSt9type_infoD1Ev[];
extern unsigned char _ZNSt9type_infoD0Ev[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTVSt9type_info[2] = {
    (unsigned int)&_ZNSt9type_infoD1Ev, (unsigned int)&_ZNSt9type_infoD0Ev
};
#pragma section forcedata end
#pragma pop
