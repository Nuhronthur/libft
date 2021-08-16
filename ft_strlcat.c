/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:45:30 by jovella           #+#    #+#             */
/*   Updated: 2021/08/16 11:49:16 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (l == 0)
		return (k);
	while ((src[i] != '\0') && ((i + j) < (l - 1)))
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	if (l > j)
		return (j + k);
	return (l + k);
}
