void    ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return;
    while (*s)
        write(fd, s++, 1);
    write(fd,'\0', 1);
}