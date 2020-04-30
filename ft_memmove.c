/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:14:55 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/28 19:52:28 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (dst);
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst < src)
	{
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (d);
}
