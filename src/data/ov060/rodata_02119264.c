/* .rodata 0x02119264..0x02119294 */
extern unsigned char data_ov060_0211ac40[];
extern unsigned char data_ov060_0211acb8[];
extern unsigned char data_ov060_0211ac10[];
extern unsigned char data_ov060_0211abf0[];
extern unsigned char data_ov060_0211ac28[];
extern unsigned char data_ov060_0211ac30[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov060_02119264[4] = {
    1, 1, 3, 0
};

unsigned char data_ov060_02119268[20] = {
    1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1,
    0, 0, 1, 1, 1, 0, 1, 1
};

unsigned int data_ov060_0211927c[6] = {
    (unsigned int)&data_ov060_0211ac40, (unsigned int)&data_ov060_0211acb8, (unsigned int)&data_ov060_0211ac10, (unsigned int)&data_ov060_0211abf0, (unsigned int)&data_ov060_0211ac28, (unsigned int)&data_ov060_0211ac30
};
#pragma section forcerodata end
