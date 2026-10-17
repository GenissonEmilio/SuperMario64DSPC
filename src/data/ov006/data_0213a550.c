/* .data 0x0213a550..0x0213a5b8 */
extern unsigned char data_ov006_0213a598[];
extern unsigned char data_ov006_0213a550[];
extern unsigned char data_ov006_0213a578[];
extern unsigned char data_ov006_0213a558[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_0213a550[8] ;

extern unsigned int data_ov006_0213a568[4] ;

unsigned char data_ov006_0213a558[16] = {
    232, 0, 240, 129, 19, 64, 0, 0, 8, 64, 240, 65,
    147, 64, 255, 255
};

unsigned char data_ov006_0213a578[32] = {
    232, 0, 232, 129, 11, 48, 0, 0, 232, 128, 8, 128,
    15, 48, 0, 0, 8, 64, 232, 65, 139, 48, 0, 0,
    8, 64, 8, 0, 143, 48, 255, 255
};

unsigned char data_ov006_0213a598[32] = {
    232, 0, 232, 129, 0, 16, 0, 0, 232, 128, 8, 128,
    4, 16, 0, 0, 8, 64, 232, 65, 128, 16, 0, 0,
    8, 64, 8, 0, 132, 16, 255, 255
};
#pragma section forcedata end
#pragma pop
