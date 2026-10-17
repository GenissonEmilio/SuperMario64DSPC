extern unsigned char data_0209fc5c[];
extern int func_020201f0(int);
int func_ov075_02116ce4(void) {
    int i;
    for (i = 0; i < 4; i++) {
        if (data_0209fc5c[i]) {
            int r = func_020201f0(i);
            if (!r) return 0;
        }
    }
    return 1;
}

unsigned char data_ov075_0211c790[8] = {
    0xf8, 0x00, 0xf8, 0x41, 0xd2, 0xf5, 0xff, 0xff
};
