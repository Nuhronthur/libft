#include <libft.h>

size_t ft_intl(int c)
{
    size_t dst;
    long int i;
    
    i = c;
    dst = 1;
    if (i < 0)
        i *= -1;
    while (i / 10 > 0)
    {
        dst++;
        i /= 10;
    }
    return (dst);
}