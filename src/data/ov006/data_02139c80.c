/* .data 0x02139c80..0x02139d18 */
extern unsigned char data_ov006_02139c88[];
extern unsigned char data_ov006_02139cc8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02139c80[2] ;

unsigned char data_ov006_02139c88[64] = {
    224, 0, 249, 65, 78, 80, 0, 0, 242, 0, 244, 65,
    13, 80, 0, 0, 5, 0, 244, 1, 77, 80, 0, 0,
    13, 0, 243, 1, 109, 80, 0, 0, 231, 0, 240, 129,
    9, 80, 0, 0, 248, 0, 240, 129, 137, 80, 0, 0,
    229, 128, 226, 129, 28, 112, 0, 0, 229, 128, 242, 65,
    30, 112, 255, 255
};

unsigned char data_ov006_02139cc8[80] = {
    224, 0, 247, 81, 78, 80, 0, 0, 237, 0, 220, 65,
    25, 112, 0, 0, 237, 128, 236, 1, 27, 112, 0, 0,
    253, 64, 220, 1, 89, 112, 0, 0, 253, 0, 236, 1,
    91, 112, 0, 0, 242, 0, 252, 81, 13, 80, 0, 0,
    5, 0, 4, 16, 77, 80, 0, 0, 13, 0, 5, 16,
    109, 80, 0, 0, 231, 0, 240, 145, 9, 80, 0, 0,
    248, 0, 240, 145, 137, 80, 255, 255
};
#pragma section forcedata end
#pragma pop
