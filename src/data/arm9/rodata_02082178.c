/* .rodata 0x02082178..0x02082190 */
extern unsigned char data_02099f30[];
extern unsigned char data_02099f78[];
extern unsigned char data_02099f40[];
extern unsigned char data_02099f58[];
extern unsigned char data_02099f38[];
extern unsigned char data_02099f28[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_02082178[6] = {
    (unsigned int)&data_02099f30, (unsigned int)&data_02099f78, (unsigned int)&data_02099f40, (unsigned int)&data_02099f58, (unsigned int)&data_02099f38, (unsigned int)&data_02099f28
};
#pragma section forcerodata end
