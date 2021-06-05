size_t  ft_strlcat(char *dst, const char *src, size_t l)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    while (dst[i] != '\0' && i < l)
        i++;
    j = i;
    while (src[i - j] != '\0' && i < n - 1)
    {
        dst[i] = src[i - j];
        i++;
    }
    if (j < n)
        dst[i] = '\0';
    return (j + ft_strlen(src));
}