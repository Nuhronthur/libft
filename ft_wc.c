#include "libft.h"

int		ft_wc(char *str, int c)
{
	int		nb;
	int		s;

	enum e_state
	{
		OUTSIDE_WD,
		INSIDE_WD
	};
	nb = 0;
	s = OUTSIDE_WD;
	while (*str)
	{
		if (ft_ischarset(*str, (char const *)&c))
			s = OUTSIDE_WD;
		else if (s == OUTSIDE_WD)
		{
			s = INSIDE_WD;
			nb++;
		}
		str++;
	}
	return (nb);
}