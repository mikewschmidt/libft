/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:44:35 by mschmidt          #+#    #+#             */
/*   Updated: 2020/05/02 16:54:37 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
	char	str[len + 1];
	char	ch[2];

	ch[0] = c;
	ch[1] = '\0';
	ft_strlcpy(str, s, len + 1);
	return (ft_strtrim(str, ch));
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
	strarr = (char**)ft_calloc(numstr + 1, sizeof(char*));
	if (!strarr)
		return (NULL);
	while (numstr--)
	{
		len = findnextsplit(&s[start], c);
		strarr[j] = getnextword(&s[start], len, c);
		if (!strarr[j])
			return (NULL);
		j++;
		start += len;
	}
	return (strarr);
}
