void cMgSmartball_pushswitch_c::Update()
{
    RenderOamBothScreens(data_ov006_02137a9c[unk_031],
                        mCurrent0 >> 12,
                        mCurrent1 >> 12,
                        -1, 1, 0);
