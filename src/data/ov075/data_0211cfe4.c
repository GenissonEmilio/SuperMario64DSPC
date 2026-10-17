/* .data 0x0211cfe4..0x0211d004 */
extern unsigned char data_ov075_0211c7f8[];
extern unsigned char data_ov075_0211ca94[];
extern unsigned char data_ov075_0211cc04[];
extern unsigned char data_ov075_0211c934[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211cfe4[1] = {
    (unsigned int)&data_ov075_0211c7f8
};

extern unsigned int data_ov075_0211cfe8[7] ;
#pragma section forcedata end
#pragma pop
