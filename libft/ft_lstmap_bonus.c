#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*newnode;
	t_list	*headlist;

	headlist = NULL;
	if(!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst->content));

		if(!newnode)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		ft_lstadd_back(&headlist, newnode);
		lst = lst->next;
	}
	return(headlist);
}