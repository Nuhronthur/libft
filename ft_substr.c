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
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	str = malloc((sizeof(char)) * (len + 1));
	if (str == 0)
		return (NULL);
	i = ft_strlen(s);
	j = start;
	k = 0;
	while (j < i && k < len)
	{
		str[k] = s[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}
