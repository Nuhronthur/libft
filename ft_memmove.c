/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:35:55 by jovella           #+#    #+#             */
/*   Updated: 2021/05/19 10:47:22 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t l)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (l > 0)
		{
			((char *)dest)[l - 1] = ((char *)src)[l - 1];
			l--;
		}
	}
	else
	{
		i = 0;
		while (i < l)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
