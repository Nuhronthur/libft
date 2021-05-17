void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    i = 0;
    s =(char *)src;
    d =(char *)dest;
    if (d > s)
        while (n > 0)
        {
            d[n] = s[n];
            n--;
        }
        else
            while (i < n)
            {
                d[i] = s[i];
                i++;
            }
    return (dest);
}