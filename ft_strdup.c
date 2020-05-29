/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 16:24:28 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/28 19:34:55 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*ptr;

	ptr = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (ptr)
	{
		ft_strlcpy(ptr, s, ft_strlen(s) + 1);
		return (ptr);
	}
	return (NULL);
}
