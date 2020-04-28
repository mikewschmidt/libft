/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:58:33 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/18 19:47:57 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace_bonus(const char c)
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
		if (c == space[i])
			return (1);
		i++;
	}
	return (0);
}
