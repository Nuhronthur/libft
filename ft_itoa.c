/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:38:40 by jovella           #+#    #+#             */
/*   Updated: 2021/08/16 14:03:21 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put(int n)
{
	int	l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		l++;
	}
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static char	*ft_oui(long int nb, char *str, int i)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[i] = '\0';
	i--;
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_put(n);
	str = (malloc(sizeof(char) * (i + 1)));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = 48;
		str [1] = '\0';
		return (str);
	}
	j = n ;
	str = ft_oui(j, str, i);
	return (str);
}
