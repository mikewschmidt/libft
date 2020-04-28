/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 22:37:19 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/21 23:00:08 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*after;

	if (!lst || !*lst || !del)
		return;
	curr = *lst;
	while (curr)
	{
		after = curr->next;
		del(curr->content);
		free(curr);
		curr = after;
	}
	*lst = NULL;
}
