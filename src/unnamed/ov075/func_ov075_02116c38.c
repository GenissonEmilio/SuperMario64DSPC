extern int data_0209fc68[];
extern int data_ov075_0211d828[];
extern int data_ov075_0211d780[];

extern void func_ov075_0211a148(void *c, void *data, int size);

void func_ov075_02116c38(void *c) {
    if (*data_0209fc68) {
        func_ov075_0211a148(c, data_ov075_0211d828, 0x14);
    } else {
        func_ov075_0211a148(c, data_ov075_0211d780, 0x14);
    }
}

/* .data 0x0211c890..0x0211c898 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern int data_ov075_0211c890[2] ;
#pragma section forcedata end
