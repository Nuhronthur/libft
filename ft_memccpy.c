void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int i;
    char    *s;

    s = (char *) dest;
    i = 0;
    while(i < n && src[i] != c)
    {
        (char *)s[i] = (char *)dest[i];
        i++;
    }
    return (dest);
}