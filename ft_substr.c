/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:12:11 by jovella           #+#    #+#             */
/*   Updated: 2021/08/16 15:22:20 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*c;
	size_t		l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l < start)
	{
		c = malloc(sizeof(char) * 1);
		if (!(c))
			return (NULL);
		c[0] = '\0';
		return (c);
	}
	c = malloc(sizeof(char) * (len + 1));
	if (!(c))
		return (NULL);
	l = 0;
	while (l < len)
	{
		c[l] = s[start + l];
		l++;
	}
	c[l] = '\0';
	return (c);
}
