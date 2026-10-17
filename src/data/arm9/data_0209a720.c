/* .data 0x0209a720..0x0209a72c */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTSN3abi17__class_type_infoE[];
extern unsigned char _ZTISt9type_info[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTIN3abi17__class_type_infoE[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTSN3abi17__class_type_infoE, (unsigned int)&_ZTISt9type_info
};
#pragma section forcedata end
#pragma pop
