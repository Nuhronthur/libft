/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:52:39 by jovella           #+#    #+#             */
/*   Updated: 2021/06/10 12:54:51 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *scr, const char *tar, size_t l)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < l)
	{
		while (scr[i + j] == tar[j])
		{
			j++;
		}
		if (tar[j] == '\0')
			return (scr[i]);
		j = 0;
		i++;
	}
	return (scr);
}
