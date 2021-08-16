/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:52:39 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:43:43 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (!len || !*haystack)
		return ((char *)0);
	while (haystack[i] && (i + j) <= len)
	{
		if (ft_strncmp((haystack + i), needle, j) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return ((char *)0);
}
