/* data 0x02111b60..0x02111bc0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_02111b80[8] = { 0x53504c43, 0x00010008, 0x00000fc0, 0x000000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff };
unsigned int data_ov043_02111b60[8] = { 0x53504c43, 0x00020008, 0x00000fc0, 0x000000ff, 0x00004fc0, 0x000000ff, 0xffffffff, 0xffffffff };
unsigned int data_ov043_02111ba0[8] = { 0x53504c43, 0x00020008, 0x00000fc0, 0x000000ff, 0x00004fc0, 0x000000ff, 0xffffffff, 0xffffffff };
#pragma section forcedata end
