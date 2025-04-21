#include "libft.h"
int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned char *s3;
    const unsigned char *s4;
    
    i = 0;
    s3 = (unsigned char *)s1;
    s4 = (unsigned char *)s2;
    while(i < n)
    {
        if(s3[i] != s4[i])
        return(s3[i] - s4[i]);
        i++;
    }
    return (0);
}

#include <assert.h>
#include <string.h>
int main(void)
{
    const void *s1 = "This is s1";
    const void *s2 = "This is s2";

    assert(memcmp(s1, s2, 11) == ft_memcmp(s1, s2, 11));
    assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
    assert(memcmp(s1, s2, 5) == ft_memcmp(s1, s2, 5));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
}

/*you can't index a void *,
memcmp() compares raw bytes — it doesn't care about null characters ('\0'), only the number of bytes (n)
when the input is const, should cast it to const type too*/