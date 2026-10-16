extern void func_020308d0(int n);
unsigned char data_0208a0e0 = 0x1;

void SetNumPlayers(int n) {
    data_0208a0e0 = n;
    func_020308d0(n);
}
