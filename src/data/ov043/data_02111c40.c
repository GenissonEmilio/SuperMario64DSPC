/* data 0x02111c40..0x02111ca0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_02111c60[8] = { 0x53504c43, 0x00020008, 0x00004fc0, 0x000000ff, 0x00000fc0, 0x000000ff, 0xffffffff, 0xffffffff };
unsigned int data_ov043_02111c40[8] = { 0x53504c43, 0x00020008, 0x00000fc0, 0x000000ff, 0x00002fc0, 0x000000ff, 0xffffffff, 0xffffffff };
unsigned int data_ov043_02111c80[8] = { 0x53504c43, 0x00020008, 0x00000fc0, 0x000000ff, 0x00004fc0, 0x000000ff, 0xffffffff, 0xffffffff };
#pragma section forcedata end
