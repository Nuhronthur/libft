/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:40:28 by jovella           #+#    #+#             */
/*   Updated: 2021/03/26 09:48:48 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*t;

	t = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			t = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (t);
}
