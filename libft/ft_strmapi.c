#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int i;

    i = 0;
    if(!s || !f)
        return(NULL);
    str = malloc((ft_strlen(s)+1) * sizeof(char));
    if(!str)
        return (NULL);
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

char    ft_ttoupper(unsigned int i, char c)
{
    (void) i;
   if((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
   {
       return (c - 32);
   }
   return c;
}

char    ft_ttolower(unsigned int i, char c)
{
    (void) i;
   if((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
   {
       return (c + 32);
   }
   return c;
}
#include <stdio.h>
int main(void)
{
    char const *s = "This is original";
    char    *result = ft_strmapi(s, ft_ttoupper);
    free(result);
    result = ft_strmapi(s, ft_ttolower);
    printf("%s", result);
    free(result);
}