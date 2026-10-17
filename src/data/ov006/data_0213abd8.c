/* .data 0x0213abd8..0x0213ac24 */
extern unsigned char data_ov006_0213abd8[];
extern unsigned char data_ov006_0213abec[];
extern unsigned char data_ov006_0213ac04[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_0213abd8[8] ;

extern unsigned int data_ov006_0213abe0[3] ;

unsigned char data_ov006_0213abec[24] = {
    232, 128, 240, 129, 34, 0, 0, 0, 8, 0, 240, 65,
    162, 0, 0, 0, 224, 0, 248, 1, 3, 0, 255, 255
};

unsigned char data_ov006_0213ac04[32] = {
    232, 128, 0, 128, 36, 0, 0, 0, 8, 0, 0, 64,
    164, 0, 0, 0, 224, 0, 0, 0, 4, 0, 0, 0,
    248, 128, 16, 0, 102, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
