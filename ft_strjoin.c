/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:32:49 by mschmidt          #+#    #+#             */
/*   Updated: 2020/02/27 15:03:05 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int		s1len;
	int		s2len;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2); 
	str = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (str && s1len && s2len)
	{
		ft_strlcpy(str, s1, s1len + 1);
		ft_strlcat(str, s2, s1len + s2len + 1);
		return (str);
	}
	else
		return (NULL);
}
