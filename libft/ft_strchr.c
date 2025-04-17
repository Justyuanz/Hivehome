#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if ((char)c == '\0')
    {
        return ('\0');
    }
    else
    {
        while(s[i] != '\0')
        {
            if((char)c == s[i])
            {
                return (s+i);
            }
            i++;
        }
    }
    return (NULL);
}

int main(void)
{
    const char *s = "THIS IS ISH";
    char c = 'I';

    printf("%s", ft_strchr(s, c));
}

/*'\0' is part of the string*/