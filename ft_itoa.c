/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:10:41 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/28 19:45:29 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	charcnt(int n)
{
	int cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

char		*ft_itoa(int n)
{
	int		sign;
	int		cnt;
	char	*str;

	sign = 1;
	if (n < 0)
		sign = -1;
	cnt = charcnt(n);
	str = (char*)ft_calloc(cnt + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[cnt] = '\0';
	while (cnt--)
	{
		str[cnt] = ((n % 10) * sign) + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
