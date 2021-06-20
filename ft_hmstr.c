#include <libft.h>

static int  ft_hmstr(char const *s1, char c)
{
    int     i;
    int     j;

    if (*s1 == '\0')
        return (0);
    while (*s1 != '\0')
    {
        if (*s1 == c)
            j = 0;
        else if (j == 0)
        {
            j = 1;
            i++;
        }
        s1++;
    }
    return (i);
}