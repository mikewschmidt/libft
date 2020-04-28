/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:10:19 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/21 17:10:19 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;
	t_list	*temp;

	cnt = 0;
	temp = lst;
	while (temp)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}
