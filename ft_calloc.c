/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:37:22 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 13:12:46 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*t;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	t = malloc(count * size);
	if (t == NULL)
		return (NULL);
	ft_bzero(t, count * size);
	return ((void *)t);
}
