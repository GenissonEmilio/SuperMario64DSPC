/* .data 0x0210c3e0..0x0210c3e8 */
extern unsigned char data_ov002_0210c3d8[];
extern unsigned char data_ov002_0210c3d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210c3e0[2] = {
    (unsigned int)&data_ov002_0210c3d8, (unsigned int)&data_ov002_0210c3d0
};
#pragma section forcedata end
#pragma pop
