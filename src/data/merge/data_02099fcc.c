 * "graphics" when no mode was parked. data_02099fcc is the display-on flag:
 * while it is clear, GX::SetGraphicsMode records the requested mode but
 * writes mode 0, so a mode change cannot light a display that is off.
 *
 * data_02099fd0 is the GX DMA channel (-1: none), shared by the whole GX
 * library. GX_InitGXState (func_02053d9c, the file above) clears the VRAM
 * state block. The empty function just below this run (func_02053a8c) is
 * FX_Init, which the boot sequence calls just before GX_Init; it belongs to
