/* .data 0x02136dfc..0x02136e2c */
extern unsigned char data_ov006_02136e04[];
extern unsigned char data_ov006_02136dfc[];
extern unsigned char data_ov006_02136e1c[];
extern unsigned char data_ov006_02136e14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_02136e1c[8] ;

extern unsigned char data_ov006_02136e14[8] ;

extern unsigned int data_ov006_02136e0c[2] ;

unsigned char data_ov006_02136e04[8] = {
    240, 0, 240, 129, 84, 16, 255, 255
};

unsigned char data_ov006_02136dfc[8] = {
    8, 64, 240, 65, 212, 16, 255, 255
};

extern unsigned int data_ov006_02136e24[2] ;
#pragma section forcedata end
#pragma pop
