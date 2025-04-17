#include "libft.h"
int    ft_tolower(int c)
{
   if((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
   {
       return (c + 32);
   }
   return c;
}

#include <ctype.h>
#include <stdio.h>
int main(void)
{
   int c = 97;
   int b = 97;
   printf("%c", (unsigned char)ft_tolower(c));
   printf("%c", (unsigned char)tolower(b));
}