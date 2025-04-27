#include "libft.h"
/*
we are adding the last list here so the head should not move at all. 
Take the address of new, and store it inside the next field of temp.(So that now temp next points to new!)"
*/
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        temp = *lst;
        while (temp -> next != NULL)
            temp = temp -> next;
        new -> next = NULL;
        temp -> next = new;
        
    }
}