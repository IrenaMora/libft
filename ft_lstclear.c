#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;
	t_list	*current;

	last = *lst;
	while (last)
	{
		current = last;
		del(last->content);
		free(last);
		last = current->next;
	}
	*lst = NULL;
}
