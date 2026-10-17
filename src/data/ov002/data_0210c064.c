/* .data 0x0210c064..0x0210c080 */
extern unsigned char daSoundObj_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SOUND_OBJ[7] = {
    (unsigned int)&daSoundObj_c_classInit, 0x1670167, 0x24800000, 0, 0x1000, 0, 0
};
#pragma section forcedata end
#pragma pop
