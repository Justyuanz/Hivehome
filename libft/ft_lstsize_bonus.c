#include "libft.h"
/*
Inside the loop, you must move lst to the next node or it might become 
infinite loop.
*/
int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while(lst != NULL)
    {
        count ++;
        lst = lst ->next;
    }
    return (count);
}