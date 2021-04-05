/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:32:21 by jovella           #+#    #+#             */
/*   Updated: 2021/04/05 12:14:22 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	i = 0;
	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		n--;
		str++;
	}
	return (s);
}
