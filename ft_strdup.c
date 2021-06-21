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
	char	*c;

	i = ft_strlen(s);
	c = (char *)ft_calloc((c + 1), sizeof(*s));
	if (!s)
	{
		errno = ENOMEM;
		return ((char *)0);
	}
	(ft_memcpy(c, s, i))
	return (c);
}
