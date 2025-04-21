#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char    *s3;
    size_t  s1len;
    size_t  s2len;
    
    if(!s1 || !s2)
        return (NULL);
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    s3 = malloc((s1len + s2len + 1) * sizeof(char));
    if(!s3)
        return (NULL);
    ft_memcpy(s3, s1, s1len);
    ft_memcpy(s3 + s1len, s2, s2len);
    s3[s1len + s2len] = '\0';
    return (s3);
}

#include<assert.h>
int main(void)
{
    char const *s1 = "";
    char const *s2 = " ";
    char *expecteds3 = " ";
    char *result = ft_strjoin(s1, s2);
    size_t len = ft_strlen(s1) + ft_strlen(s2) + 1;

    assert(ft_strncmp(expecteds3, result, len) == 0);
}