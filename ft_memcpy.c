/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:11:55 by mschmidt          #+#    #+#             */
/*   Updated: 2020/03/07 18:12:06 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void *ft_memcpy(void  *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (dst || src)
	{
		while (i < n && s[i] != '\0')
		{
			d[i]= s[i];
			i++;
		}
		if (s[i] == '\0' && i != n)
			d[i] = '\0';
	}
	return dst;
}	
