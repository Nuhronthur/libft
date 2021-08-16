/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:58:14 by jovella           #+#    #+#             */
/*   Updated: 2021/08/16 09:52:27 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (!(dest))
		return (NULL);
	while (i < j)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
