#include "libft.h"
char *ft_strdup(const char *s1)
{
    char    *s2;
    size_t  i;

    i = 0;
    s2 = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if(s2 == NULL)
        return (NULL);
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

/*#include <string.h>
#include <assert.h>
int main(void)
{
    const char *s1 = "";
    char *origin = strdup(s1);
    char *mine = ft_strdup(s1);
    assert(strcmp(origin, mine) == 0);
    free(origin);
    free(mine);
}*/