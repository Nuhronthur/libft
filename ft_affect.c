/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:10:47 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 16:45:50 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**affect(char const *s1, char **dst, char c, int l)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && j < l)
		k = 0;
		while (s1[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * ft_numchar(s1, c, i) + 1);
		if (dst[j] == NULL)
			return (ft_freedom((char const **)dst, j));
		while (s1[i] != '\0' && s1[i] != c)
			dst[j][k++] = s1[i++];
		dst[j][k] = '\0';
		j++;
	dst[j] = 0;
	return (dst);
}
