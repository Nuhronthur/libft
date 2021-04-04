size_t ft_strlcpy(char *dst, const char *src, size_t t)
{
    int i;
    size_t l;

    i = 0;
    t = 0;
    while(src[l] != '\0')
        l++;
    if (t > 0)
    {
        while(i < t && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
    }
    dst[i] = '\0';
    return (i);
}