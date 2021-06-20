#include <libft.h>

static char     **ft_freedom(char const **dst, int j)
{
    while (j > 0)
    {
        j--;
        free((void *)dst[j])
    }
    free(dst);
    return (NULL);
}