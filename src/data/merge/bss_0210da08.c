s32 daObjNumber_c::InitResources()
{
    if (param1 & 0x10) {
        TextureSequence::LoadFile(data_ov002_0210da08);
