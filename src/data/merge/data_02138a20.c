void cMgSmartball_spring_c::Update()
{
    if ((*(int *)((char *)mpManager + 8) & 0xff) == 0) {
        Mg_RenderSpriteBoth(data_ov006_02138a20[0], mCurrent0 >> 12, mCurrent1 >> 12, -1, 1);
