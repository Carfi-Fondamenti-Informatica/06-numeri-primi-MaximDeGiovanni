#include "lib.h"
bool num_prim(int n, int i)
{

    if (i<2)
        return true;

    if ( n % i == 0)
        return false;
    else
        num_prim(n, i - 1);
}
