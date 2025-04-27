#include "libft.h"
/*
C always passes by value (copy).
If you return a new value, and reassign, you can still "update" the original.
If you want to directly modify the original inside the function without return, you must pass pointer(the address of the value)
*/
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst;
    *lst = new;
}