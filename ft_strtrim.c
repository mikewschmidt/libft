/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:58:04 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/27 18:01:47 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	chrcheck(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (chrcheck(s1[start], set) && s1[start] != '\0')
		start++;
	while (chrcheck(s1[end], set) && start < end)
		end--;
	if (start < end)
	{
		ptr = (char*)malloc((end - start + 2) * sizeof(char));
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, &s1[start], (end - start + 2)); 
		return (ptr);
	}
	return ("");
}
