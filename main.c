
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("1st"));
	lst->next = ft_lstnew(ft_strdup("2nd"));
	lst->next->next = ft_lstnew(ft_strdup("3rd"));

	t_list *temp;
	temp = lst;
	
	while (temp)
	{
		printf("%s -->", temp->content);
		if(temp->next)
			temp = temp->next;
		else
			break;
	}
	/*	
	printf("%s -->", lst->content);
	printf("%s -->", lst->next->content);
	printf("%s -->", lst->next->next->content);
	*/
	//ft_lstprint_bonus(lst);
}
