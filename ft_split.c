/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:48:03 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:40:33 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static int	ft_freedom(char **t, int i)
{
	if (!t[i])
	{
		while (--i >= 0)
			free(t[i]);
		free(t);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		nb;
	int		i;
	int		j;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	nb = ft_wc((char *)s, (char)c);
	dest = (char **)ft_calloc(sizeof(char *), nb + 1);
	if (!dest)
		return (NULL);
	while (s[j] && s[j] == c)
		j++;
	while (++i < nb)
	{
		dest[i] = ft_cut((s + j), c, &j);
		if (ft_freedom(dest, i))
			return (NULL);
	}
	return (dest);
}
