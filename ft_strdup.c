/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:58:14 by jovella           #+#    #+#             */
/*   Updated: 2021/06/10 14:16:11 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s);
	dest = (char *)ft_calloc((i + 1), sizeof(*dest));
	if (!s)
	{
		errno = ENOMEM;
		return ((char *)0);
	}
	(ft_memcpy(dest, s, i));
	return (dest);
}
