#include <libft.h>

static int  ft_numchar(char const *s1, char c, int i)
{
    int l;

    l =0;
    while (s1[i] != c && s1[i] != '\0')
    {
        l++;
        i++;
    }
    return (l);
}