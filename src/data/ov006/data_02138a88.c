/* .data 0x02138a88..0x02138ad0 */
extern unsigned char data_ov006_02138a90[];
extern unsigned char data_ov006_02138ab0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02138a88[2] ;

unsigned char data_ov006_02138a90[32] = {
    232, 0, 232, 129, 12, 48, 0, 0, 232, 128, 8, 128,
    16, 48, 0, 0, 8, 64, 232, 129, 140, 48, 0, 0,
    8, 0, 8, 64, 144, 48, 255, 255
};

unsigned char data_ov006_02138ab0[32] = {
    232, 0, 232, 129, 18, 48, 0, 0, 232, 128, 8, 128,
    22, 48, 0, 0, 8, 64, 232, 129, 146, 48, 0, 0,
    8, 0, 8, 64, 150, 48, 255, 255
};
#pragma section forcedata end
#pragma pop
