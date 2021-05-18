int memcmp(const void *s1, const void *s2,size_t n);
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    if (n == 0)
        return (0);
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        if (n)
        {
            str1++;
            str2++;
        }
    }
    return (0);
}