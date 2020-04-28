/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:44:35 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/19 17:29:56 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h> ////////////// REMOVE THIS LINE!!!!!  /////////////////////////////

static int	findnextsplit(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	else
		i = 0;
	return (i);
}

static int	numofstr(char const *s, char c)
{
	int	num;
	int	i;
	int	end;

	num = 0;
	i = 0;
	end = 0;
	while (s[i] != '\0')
	{
		end = findnextsplit(&s[i], c);
		if(end)
		{
			num++;
		}
		else
			break;
		i += end;
		
	}
	return (num);
}

char		**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	end;
	char	*str;
	char	**strarr;
	int	numstr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	numstr = numofstr(s, c);
	strarr = (char**)ft_calloc(numstr, sizeof(char*));
	if (!strarr)
		return (NULL);
	while (numstr--)
	{
		end = findnextsplit(&s[i], c) + i;
		str = (char*)ft_calloc((end - i + 1), sizeof(char));
		ft_strlcpy(str, &s[i], end - i);
		strarr[j] = ft_strtrim(str, &c);
		if (!strarr[j])
			return (NULL);
		//printf("String: %s\n", strarr[j]);
		free(str);
		j++;
		i = end;
	}
	return (strarr);	
}
