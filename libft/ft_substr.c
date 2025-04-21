#include "libft.h"
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char   *sub;
    size_t    i;
    size_t   slen;

    i = 0;
    if(s == NULL)
        return (NULL);
    slen = ft_strlen(s);
    if(start >= slen)
        return(ft_strdup(""));
    if(len > slen - start)
        len = slen - start;
    sub = malloc((len + 1) * sizeof(*s));
    if(sub == NULL)
        return (NULL);
    while(len > 0)
    {
        sub[i] = s[start + i];
        i++;
        len--;
    }
    sub[i] = '\0';
    return (sub);
}

#include <assert.h>
int main(void)
{
    char const *s = "Apple pie";
    unsigned int start = 5;
    size_t  len = 10;
    char    *expected = " pie";
    char *result = ft_substr(s, start, len);
    assert(ft_strncmp(expected, result, len) == 0);
    free (result);
}

/*
make it a habbit to check every parameter?
use strdup to allocate an empty string so the freeing would be safe later.
*/