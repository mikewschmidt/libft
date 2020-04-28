
#include "libft.h"
#include <stdio.h> //// REMOVE THIS LINE!!!!  /////////
void	ft_lstprint_bonus(t_list *lst)
{
	t_list *curr;

	curr = lst;
	if (!lst)
		printf("What you passed in is NULL!");
	while (curr)
	{
		printf("|");
		//printf(" %s ", curr->content);
		printf("| -->");
		curr = curr->next;
	}
}
