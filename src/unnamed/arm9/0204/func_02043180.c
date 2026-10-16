
/* bss 0x020a4b64..0x020a4b68 */
int data_020a4b64;

extern int data_020a4b60;
extern short data_020a4b54;
extern unsigned char data_020a4b48;

void func_02043180(short a, int b, int c, unsigned char d) {
    data_020a4b60 = c;
    data_020a4b54 = a;
    data_020a4b48 = d;
    data_020a4b64 = b;
}
