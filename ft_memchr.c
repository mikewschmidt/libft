/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:59:53 by mschmidt          #+#    #+#             */
/*   Updated: 2020/03/07 18:11:11 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	int				found_char;

	i = 0;
	str = (unsigned char*)s;
	found_char = -1;
	if (s)
	{
		while (i < (int)n)
		{
			if (str[i] == (unsigned char)c)
			{
				found_char = i;
				break;
			}
			i++;
		}
	}
	else
	{
		str[0]++;
	}
	if (found_char == -1)
	{
		return (NULL);
	}
	else
	{
		return ((void*)s + found_char);
	}
}
