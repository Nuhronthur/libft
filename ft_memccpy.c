/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:25:05 by jovella           #+#    #+#             */
/*   Updated: 2021/05/19 11:26:59 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	s = (char *) dest;
	i = 0;
	while (i < n && src[i] != c)
	{
		(char *)s[i] = (char *)dest[i];
		i++;
	}
	return (dest);
}
