/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:56:11 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/29 03:40:53 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	i;

	d_len = 0;
	while (dst[d_len] != '\0' && d_len < size)
		d_len++;
	i = 0;
	while ((d_len + i) < (size - 1) && size != 0 && src[i] != '\0')
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dst[d_len + i] = '\0';
	return (d_len + ft_strlen(src));
}
