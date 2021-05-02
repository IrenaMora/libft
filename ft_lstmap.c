#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*lst_first;
	t_list	*lst_current;

	if (lst == NULL)
		return (NULL);
	lst_first = ft_lstnew(f(lst->content));
	if (lst_first == NULL)
		return (lst_first);
	lst = lst->next;
	while (lst)
	{
		lst_current = ft_lstnew(f(lst->content));
		if (lst_current == NULL)
		{
			ft_lstclear(&lst_first, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_first, lst_current);
		lst = lst->next;
	}
	return (lst_first);
}
