/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:01:50 by mschmidt          #+#    #+#             */
/*   Updated: 2020/04/29 22:27:58 by mschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*prev;
	t_list	*head;

	if (!lst)
		return (NULL);
	temp = lst;
	new = ft_lstnew(f(temp->content));
	temp = temp->next;
	prev = new;
	head = new;
	while (temp)
	{
		new = ft_lstnew(f(temp->content));
		prev->next = new;
		temp = temp->next;
		prev = prev->next;
	}
	return (head);
	del(NULL);
}
