/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:56:11 by jovella           #+#    #+#             */
/*   Updated: 2021/05/19 10:55:48 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dst);
}
