unsigned char *data_0209fd0c;
struct Data020a0d1c {
    void *vtable;
    char base[0x14];
    unsigned short triangleID;
    unsigned short colliderIdx;
    int clsnID;
    void *owner;
    void *collider;
};extern struct Data020a0d1c data_020a0d1c;

typedef char data_020a0d1c_size[sizeof(struct Data020a0d1c) == 0x28 ? 1 : -1];
int func_02035408(unsigned char *p)
{
    return p[4] & 32;
}
