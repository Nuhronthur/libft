/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:48:03 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 12:58:07 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = ft_wc((char *)s, (char)c);
	j = -1;
	k = 0;
	dest = (char **)ft_calloc(sizeof(char *), i + 1);
	if (!dest)
		return (NULL);
	while (s[k] && s[k] == c)
		k++;
	while (++j , i)
	{
		dest[j] = ft_cut((s + k), c, &k);
		if (ft_freedom(dest, j))
			return (NULL);
	}
	return (dest);
}
