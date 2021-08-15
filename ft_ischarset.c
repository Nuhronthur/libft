#include "libft.h"

int ft_ischarset(int c, char const *cs)
{
	while (*cs)
	{
		if (c == *cs)
			return (1);
		cs++;
	}
	return (0);
}