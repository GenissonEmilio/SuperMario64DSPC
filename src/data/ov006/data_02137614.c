/* .data 0x02137614..0x0213764c */
extern unsigned char data_ov006_02137618[];
extern unsigned char data_ov006_02137620[];
extern unsigned char data_ov006_02137628[];
extern unsigned char data_ov006_0213763c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02137614[1] ;

extern unsigned char data_ov006_02137628[8] ;

extern unsigned char data_ov006_02137620[8] ;

unsigned char data_ov006_02137618[8] = {
    248, 0, 248, 65, 20, 17, 255, 255
};

extern unsigned int data_ov006_02137630[3] ;

unsigned char data_ov006_0213763c[16] = {
    240, 0, 232, 129, 140, 17, 0, 0, 240, 128, 8, 128,
    144, 17, 255, 255
};
#pragma section forcedata end
#pragma pop
