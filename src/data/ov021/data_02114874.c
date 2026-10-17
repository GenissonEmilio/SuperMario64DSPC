/* .data 0x02114874..0x0211488c */
extern unsigned char _ZN8dActor_c11AfterRenderEj[];
extern unsigned char _ZN7fBase_c16OnPendingDestroyEv[];
extern unsigned char _ZN7fBase_c9Virtual34Ejj[];
extern unsigned char _ZN7fBase_c9Virtual38Ejj[];
extern unsigned char _ZN7fBase_c13OnHeapCreatedEv[];
extern unsigned char _ZN9daGrock_cD1Ev[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02114874[2] = {
    (unsigned int)&_ZN8dActor_c11AfterRenderEj, (unsigned int)&_ZN7fBase_c16OnPendingDestroyEv
};

unsigned int data_ov021_0211487c[4] = {
    (unsigned int)&_ZN7fBase_c9Virtual34Ejj, (unsigned int)&_ZN7fBase_c9Virtual38Ejj, (unsigned int)&_ZN7fBase_c13OnHeapCreatedEv, (unsigned int)&_ZN9daGrock_cD1Ev
};
#pragma section forcedata end
#pragma pop
