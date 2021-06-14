#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/errno.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
}   t_list;
int	ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t l, size_t s);
int	ft_isalpha(int c);
int	ft_isascii(char c);
int	ft_isdigit(int c);
int	ft_isprint(char c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t l);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char **ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t l);
size_t	ft_strlcpy(char *dst, const char *src, size_t t);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *f, const char *s, unsigned int l);
char	*ft_strnstr(const char *scr, const char *tar, size_t l);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(char c);
int	ft_toupper(char c);
#endif