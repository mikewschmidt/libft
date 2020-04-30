/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:44:35 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/29 19:44:39 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>  /// REMOVE THIS LINE
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

static int	getnumstr(char const *s, char c)
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
		if (end)
		{
			num++;
		}
		else
			break ;
		i += end;
	}
	return (num);
}

char		*getnextword(char const *s, int len, char c)
{
	char	str[len + 2];

	ft_strlcpy(str, s, len + 1);
	return (ft_strtrim(str, &c));
}

char		**ft_split(char const *s, char c)
{
	int		j;
	int		start;
	int		len;
	char	**strarr;
	int		numstr;

	j = 0;
	start = 0;
	if (!s)
		return (NULL);
	numstr = getnumstr(s, c);
	printf("Number of words: %i\n", numstr); // REMOVE THIS LINE
	strarr = (char**)ft_calloc(numstr, sizeof(char*));
	if (!strarr)
		return (NULL);
	while (numstr--)
	{
		len = findnextsplit(&s[start], c);
		strarr[j] = getnextword(&s[start], len, c);
		if (!strarr[j])
			return (NULL);
		printf("str[%i]: %s\n", numstr, strarr[j]);//REMOVE THIS LINE
		j++;
		start += len;
	}
	return (strarr);
}
