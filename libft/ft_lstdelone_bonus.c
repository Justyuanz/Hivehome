#include "libft.h"
/*
 Deletes and frees the given node's content using the function 'del' provided.
 Then frees the node itself.
 
 'del' is a function pointer, used to correctly free the content
 (because content might have been dynamically allocated with malloc, 
 and might need a special way to free).

 Important:
 - Only the node and its content are freed.
 - The next node (lst->next) is NOT freed or modified.
 If 'lst' or 'del' is NULL, the function does nothing.
*/

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if(!lst || !del)
        return;
    del(lst -> content);
    free(lst);
}