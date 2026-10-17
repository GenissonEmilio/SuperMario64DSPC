/* .data 0x02113518..0x02113534 */
extern unsigned char data_ov015_02113968[];
extern unsigned char data_ov015_02113448[];
extern unsigned char data_ov015_02113464[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_02113518[7] = {
    (unsigned int)&data_ov015_02113968, (unsigned int)&data_ov015_02113448, 0x6de06e0, 0x6e206e1, (unsigned int)&data_ov015_02113464, 0x47e0001, 47
};
#pragma section forcedata end
#pragma pop
