static int ft_isspace(char c)
{
    return (c == '\t' || c =='\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(ft_isspace(str[i]))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i]>= '0' && str[i] <= '9')
    {
        result = result*10 + str[i] - '0';
        i++;
    }
    return (sign * result);
}

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
int main(void)
{
  assert(atoi(" -123junk") == ft_atoi(" -123junk"));
  assert(atoi(" +023junk") == ft_atoi(" +023junk"));
  assert(atoi(" 0") == ft_atoi(" 0"));
  assert(atoi("0042") == ft_atoi("0042"));
  assert(atoi("0x2a4") == ft_atoi("0x2a4"));
  assert(atoi("sa") == ft_atoi("sa"));
  assert(atoi("2147483648") == ft_atoi("2147483648"));
}