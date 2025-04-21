#include "libft.h"
void    *ft_calloc(size_t count, size_t size)
{
    size_t  i;
    size_t  totalbytes;
    unsigned char    *ptr;

    i = 0;
    totalbytes = count * size;
    if(count == 0 || size == 0)
        ptr = malloc(1);
    if(ptr == NULL || totalbytes / count != size)
         return(NULL);
    ptr = malloc(totalbytes);
    if(ptr == NULL)
        return (NULL);
    while(i < totalbytes)
    {
         ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}

#include <stdio.h>
int main(void)
{
    const unsigned char *s1;
    const unsigned char *s2;
    size_t i;
    size_t count = 0;
    size_t size = sizeof(unsigned char);

    i = 0;
    s1 = calloc(count, size);
    s2 = ft_calloc(count, size);

    if (s1 == NULL || s2 == NULL)
        return (1);
    while(i < count * size)
    {
        if (s1[i] != s2[i])
        {
            free((void *)s1);
            free((void *)s2);
            printf("mismatch!");
            return (s1[i] - s2[i]);
        }
        i++;
    }

    free((void *)s1);
    free((void *)s2);
    printf("match!");
    return (0);
}

/*
overflow should be checked here??If count * size is too big, it can overflow and wrap around to a smaller number

we cannot index into void pointer or calculate their size 
llocates memory for an array of COUNT objects of SIZE bytes and initializes all bytes in the allocated storage to zero.
count * sizeof(type) just as malloc

count = num of blocks of memories, size is bytes in each block, need to zero out all the bytes so count * size
*/