/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:56:11 by jovella           #+#    #+#             */
/*   Updated: 2021/04/05 14:42:21 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t l)
{
	int i;
	int cpt;
	char	*s;

	s = (char *)dest;
	i = 0;
	cpt = 0;
	while(cpt < l)
	{
		(char *)s[i] = (char *)src[i];
		i++;
		l--;
		cpt++;
	}
	return (dest);
}
