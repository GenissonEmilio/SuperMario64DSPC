 *   symbols/verified.tsv and renaming is symbols.txt. data_0209b4ac is
 *   the current music ID, written by Sound::SetMusic/LoadAndSetMusic
 *   and cleared by StopLoadedMusic.
 * Leftover: g_profile_SET_SE is ov002 gap data outside this TU (S14), as
 *   are the sound table and the WATERFALL_SOUNDS_DISABLED flag this TU
 *   reads and writes.
 * Leftover: the PlayLong position is *(Vector3 *)&mCamSpacePosX, the
 *   inherited cam-space triple at 0x74 read as one vector; daBmb_c
