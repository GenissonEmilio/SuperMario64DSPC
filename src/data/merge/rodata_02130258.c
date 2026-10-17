void daKrb_c::OnPendingDestroy()
{
}

// @symbol _ZN7daKrb_c6RenderEv
/* Draw the body and the cap. Nothing is drawn while mFlags bit 0x40000 (the
 * Yoshi-mouth state in dActor_c.h) is set or the Goomba is dormant (mIsDormant). While mDeathState is
 * DEATH_STOMPED the scale is multiplied by data_ov084_02130258[type] for
 * the draw and restored afterwards. */
int daKrb_c::Render()
{
    int locked;
