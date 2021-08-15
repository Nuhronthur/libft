/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freedom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:12:59 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 18:17:41 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int	ft_freedom(char **t, int i)
=======
char	**ft_freedom(char const **dst, int j)
>>>>>>> 17305d61595549d1e43e6afa966a9f57ba915c1d
{
	if (!t[i])
	{
		while (--i >= 0)
			free(t[i]);
		free(t);
		return (1);
	}
	return (0);
}
