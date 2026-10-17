/* .data 0x021111fc..0x02111210 */
extern unsigned char data_ov049_02111218[];
extern unsigned char data_ov049_021111c8[];
extern unsigned char data_ov049_021111d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov049_021111fc[2] = {
    (unsigned int)&data_ov049_02111218, (unsigned int)&data_ov049_021111c8
};

unsigned int data_ov049_02111204[3] = {
    0x7da07db, 0, (unsigned int)&data_ov049_021111d8
};
#pragma section forcedata end
#pragma pop
