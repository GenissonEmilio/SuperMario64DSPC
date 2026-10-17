//cpp
/* Step an angle toward a target, and the linear approaches beside it.
 * Definitions run high address first so reverse emission is ROM order.
 *
 * leftovers:
 * - ApproachLinear2(int &) reads and writes the reference through an
 *   unsigned char *. A full-word store widens the byte the ROM keeps.
 * - ApproachAngle and UpdateAngle call __aeabi_idiv. The declaration is
 *   local; the host build has no divider.
 */

#ifndef _MSC_VER
/* The host smoke build has no divider. These two call __aeabi_idiv. */
extern "C" int __aeabi_idiv(int a, int b);

// @symbol ApproachAngle
extern "C" int ApproachAngle(short *cur, short target, int divisor, int band, int maxStep)
{
    int diff;
    short c;
    c = *cur;
    diff = (int)(((long long)(short)(target - c)));
    if (c != target) {
        int step = (short)__aeabi_idiv(diff, divisor);
        if (step > maxStep || step < -maxStep) {
            if (step > band) step = band;
            else if (step < -band) step = (short)-band;
            *cur = *cur + step;
        } else if (diff >= 0) {
            *cur = *cur + maxStep;
            if ((short)(target - *cur) <= 0) *cur = target;
        } else {
            *cur = *cur - maxStep;
            if ((short)(target - *cur) >= 0) *cur = target;
        }
    }
    return target - *cur;
}

// @symbol _Z11UpdateAngleRssis
void UpdateAngle(short &angle, short target, int divisor, short maxStep) {
    short step = (short)(__aeabi_idiv((short)(target - angle), divisor));
    if (step > maxStep) {
        angle = angle + maxStep;
        return;
    }
    if (step < -maxStep) {
        angle = angle - maxStep;
    } else {
        angle = angle + step;
    }
}
#endif

// @symbol _Z15ApproachLinear2Riii
int ApproachLinear2(int &ref, int target, int step)
{
    unsigned char *p = (unsigned char *)&ref;
    int cur;
    int ip;
    if (step != 0) {
        cur = *p;
        if (cur > target)
            step = (short)(-step);
        ip = (short)(cur + step);
        if (step * (ip - target) >= 0) {
            *p = (unsigned char)target;
            return 1;
        }
        *p = (unsigned char)ip;
    } else if (*p == target) {
        return 1;
    }
    return 0;
}

// @symbol _Z15ApproachLinear2Rsss
int ApproachLinear2(short &x, short target, short step)
{
    if (step != 0) {
        if (x > target) step = -step;
        x += step;
        if (step * (x - target) >= 0) {
            x = target;
            return 1;
        }
    } else if (x == target) {
        return 1;
    }
    return 0;
}

// @symbol _Z14ApproachLinearRiii
int ApproachLinear(int &ref, int target, int step)
{
    if (step != 0) {
        if (ref > target)
            step = -step;
        ref = ref + step;
        if ((long long)step * (ref - target) >= 0) {
            ref = target;
            return 1;
        }
    } else if (ref == target) {
        return 1;
    }
    return 0;
}

// @symbol _Z14ApproachLinearRsss
bool ApproachLinear(short &x, short target, short step)
{
    if (step != 0) {
        short d = (short)(x - target);
        if (d > 0) step = -step;
        x += step;
        d = (short)(x - target);
        if (step * d >= 0) {
            x = target;
            return true;
        }
    } else if (x == target) {
        return true;
    }
    return false;
}

/* arm9-data-run 0x02099468 data */
#pragma push
#pragma explicit_zero_data on
extern "C" {
unsigned int _ZTI14dBgW_KcMbgSclY[3] = {
    0x0209A764, 0x02099474, 0x02099410,
};
unsigned int _ZTS14dBgW_KcMbgSclY[7] = {
    0x42643431, 0x4B5F5767, 0x67624D63, 0x596C6353, 0x00000000, 0x00000000, 0x02099468,
};
unsigned int _ZTV14dBgW_KcMbgSclY[15] = {
    0x0203AB68, 0x0203AB3C, 0x0203AA0C, 0x01FFD920, 0x0203A4DC, 0x02039E60, 0x0203A8FC, 0x0203A594,
    0x0203A660, 0x02039438, 0x02039930, 0x02039924, 0x02039908, 0x00000000, 0x020992E4,
};
}
#pragma pop
/* end arm9-data-run 0x02099468 */
