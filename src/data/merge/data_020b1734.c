unsigned char data_ov000_020b1734[28] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 98,
    103, 95, 104, 97, 110, 97, 95, 115, 97, 103, 97, 115,
    101, 50, 95, 110
};
void dScGameOver_c::OnPendingDestroy()
{
}

/* [3] 0x020b0730 -- repaints the sub-screen BG1 palette bank over the two
 * yes/no boxes: two 0x20-by-4 rectangles whose screen-map origins come from
 * data_ov003_020b174c. `arg` non-zero forces both back to the unselected
 * bank; zero picks the highlighted bank for whichever box mSelection names,
