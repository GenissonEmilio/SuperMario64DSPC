/* data 0x02133f00..0x02133f18 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02133f08[2] = { 0x81f000f0, 0xffff1004 };
unsigned int data_ov006_02133f00[2] = { 0x81f000f0, 0xffff10a0 };
unsigned int data_ov006_02133f10[2] = { 0x02133f08, 0x02133f00 };
#pragma section forcedata end
