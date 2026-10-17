/* .data 0x0208a170..0x0208a178 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char gMgGroupBase[4] = {
    3, 0, 0, 0
};

unsigned char gMgLastSelected[4] = {
    255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
