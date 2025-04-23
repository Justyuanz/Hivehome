#include "libft.h"
static int get_len(long	n)
{
	int	len;

	len = 1;
	if(n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		len++;
		n /= 10;

	}
	return (len);
}
static char	*make_str(char	*str, long p, int len)
{
	if(p < 0)
	{
		str[0] = '-';
		p = -p;
	}
	while(p > 0)
	{
		str[len - 1] = p%10 + '0';
		p /= 10;
		len--;
	}
	return (str);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	p;

	p = (long )n;
	len = 1;
	if (p == 0)
	{
		str = malloc(2 * sizeof(char));
		if(!str)
			return (NULL);
		str[0] = '0';
	}
	else
	{
		len = get_len(n);
		str = malloc ((len + 1) * sizeof(char));
		if(!str)
			return (NULL);
		str = make_str(str, p, len);
	}
	str[len] = '\0';
	return (str);
}

#include <stdio.h>
int	main(void)
{
	int i = -12345;
	char *str = ft_itoa(i);

	printf("%s", str);
	free(str);
}