/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:55:34 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/27 14:13:29 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h> //// REMOVE THIS LINE!!!  ////
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	ch = (unsigned char)c;
	
	printf("size of n: %i\n", (int)n); /// REMOVE THIS LINE
	printf("stopping char: %i\n", c); /// REMOVE THIS LINE

	while (i < n && s[i] != '\0')
	{
		if (s[i] == ch)
		{
			printf("FOUND stopping char: %c\n", ch);
			d[i] = s[i];
			return (&d[i] + 1);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
