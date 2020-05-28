/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:11:55 by mschmidt          #+#    #+#             */
/*   Updated: 2020/05/14 16:15:53 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (!dst && !src)
		return ;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
