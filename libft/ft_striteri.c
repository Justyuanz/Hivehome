void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    i = 0;
    if(s && f)
    {
        while(s[i])
        {
            f(i, &s[i]);
            i++;          
        }
    }
}


void    ft_ttoupper(unsigned int i, char *c)
{
    (void) i;
   if( *c >= 'a' && *c <= 'z')
   {
       *c -= 32;
   }
}

void    ft_ttolower(unsigned int i, char *c)
{
    (void) i;
   if(*c >= 'A' && *c <= 'Z')
   {
       *c += 32;
   }
}
#include <stdio.h>
int main(void)
{
    char s[] = "This is original";
    ft_striteri(s, ft_ttoupper);
    printf("%s\n", s);
    ft_striteri(s, ft_ttolower);
    printf("%s\n",s );
}