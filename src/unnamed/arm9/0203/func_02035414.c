struct Data020a0d1c {
    void *vtable;
    char base[0x14];
    unsigned short triangleID;
    unsigned short colliderIdx;
    int clsnID;
    void *owner;
    void *collider;
};
struct Data020a0d1c data_020a0d1c;
static unsigned char data_020a0d1c_pad[28];

void func_02035414(char *self)
{
    *(unsigned char *)(self + 4) &= ~0x20;
}
