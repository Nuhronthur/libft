#include "libft.h"

static char	*ft_cut(char const *s, char c, int *j)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dest = ft_substr(s, 0, i);
	if (!dest)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	*j += i;
	return (dest);
}