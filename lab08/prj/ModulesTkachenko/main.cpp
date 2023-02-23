// The functions contained in this file are pretty dummy
// and are included only as a placeholder. Nevertheless,
// they *will* get included in the static library if you
// don't remove them :)
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

#define _USE_MATH_DEFINES
#include <math.h>

float s_calculation(float x, float y, float z)
{
    float S = log(abs(sin(z))) + (0.5 * pow(x,2) - sqrt(abs(pow(y+z,2) - pow(x,5)))) / 10 * M_PI * pow(z,4);

    return S;
}

