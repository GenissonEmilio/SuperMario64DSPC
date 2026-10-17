void daDemo_c::OnPendingDestroy()
{
}

/* -------------------------------------------------------------------------- */
/* ROM ordinal 142 -- _ZN8daDemo_c6RenderEv, 0x020f80ac, size 0x118 */
/* -------------------------------------------------------------------------- */
// @symbol _ZN8daDemo_c6RenderEv
int daDemo_c::Render()
{
  if (param1 == 0x19){
    /* Draw the model three times: copy INV_VIEW_MATRIX_ASR_3 into its
       mat4x3, then for each entry of data_ov002_0210bb7c overwrite the
       translation column and render. The {p, cur, src} struct is the
       allocation shape the ROM compiles; a plain Matrix4x3 pointer builds
