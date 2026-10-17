/* .data 0x020c2efc..0x020c2f24 */
extern unsigned char data_ov005_020c2ef4[];
extern unsigned char data_ov005_020c2eec[];
extern unsigned char data_ov005_020c2ee4[];
extern unsigned char data_ov005_020c2edc[];
extern unsigned char data_ov005_020c2ed4[];
extern unsigned char data_ov005_020c2ecc[];
extern unsigned char data_ov005_020c2ec4[];
extern unsigned char data_ov005_020c2ebc[];
extern unsigned char data_ov005_020c2eb4[];
extern unsigned char data_ov005_020c2eac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmDigits[10] = {
    (unsigned int)&data_ov005_020c2ef4, (unsigned int)&data_ov005_020c2eec, (unsigned int)&data_ov005_020c2ee4, (unsigned int)&data_ov005_020c2edc, (unsigned int)&data_ov005_020c2ed4, (unsigned int)&data_ov005_020c2ecc, (unsigned int)&data_ov005_020c2ec4, (unsigned int)&data_ov005_020c2ebc,
    (unsigned int)&data_ov005_020c2eb4, (unsigned int)&data_ov005_020c2eac
};
#pragma section forcedata end
#pragma pop
