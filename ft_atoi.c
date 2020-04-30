/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 16:25:52 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/29 01:06:47 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strtoi(const char *c, int sign, int len, int base)
{
	int				i;
	unsigned int	total;

	i = 0;
	total = 0;
	if (len > 10)
	{
		if (sign == -1)
			return (0);
		else
			return (-1);
	}
	while (i < len)
	{
		total = (total * base) + (c[i] - '0');
		i++;
	}
	if (total > 2147483648 - 1 && sign == 1)
		return (-1);
	else if (total > 2147483648 && sign == -1)
		return (0);
	return (sign * total);
}

int			ft_isspace(char const c)
{
	int		i;
	char	space[6];

	i = 0;
	space[0] = ' ';
	space[1] = '\t';
	space[2] = '\n';
	space[3] = '\v';
	space[4] = '\f';
	space[5] = '\r';
	while (i < 6)
	{
		if (space[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_atoi(char const *nptr)
{
	int	i;
	int	start;
	int	sign;

	i = 0;
	start = -1;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	sign = (nptr[i] == '-') ? -1 : 1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (start == -1)
			start = i;
		i++;
	}
	if (start >= 0)
		return (strtoi(&nptr[start], sign, i - start, 10));
	else
		return (0);
}
