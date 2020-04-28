/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 13:33:38 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/18 13:33:38 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	size_t	len_lit;

	i = 0;
	len_lit = ft_strlen(little);
	if (!len || !len_lit)
		return ((char*)big);
	while (len && big[i])
	{
		if (little[0] == big[i] && len >= len_lit)
		{
			if(ft_strncmp(&big[i], &little[0], len_lit) == 0)
				return ((char*)&big[i]);
		}
		len--;
		i++;
	}
	return (NULL);
}
