#include <limits.h>

int reverse(int x)
{
    long   ret = 0;
    long   nb = x;

    if (nb < 0)
        nb *= -1;
    while (nb > 0)
    {
       ret = (nb % 10) + (ret * 10);
       nb = nb / 10;
    }
    if (x < 0)
       ret *= -1;
    if (ret < INT_MIN || ret > INT_MAX)
        return (0);
    return (ret);
}
