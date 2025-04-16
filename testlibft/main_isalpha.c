#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int a;
	int b;
	int	c;
	int	d;

	a = ' ';
	b = '5';
	c = 'A';
	d = 'u';
	printf("%d ", ft_isalpha(a));
	printf("%d\n", isalpha(a));
	//system-specific or compiler-specific details that cause isalpha() to return a different non-zero value, such as 1024
	printf("%d ", ft_isalpha(b));
	printf("%d\n", isalpha(b));
	printf("%d ", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	printf("%d ", ft_isalpha(d));
	printf("%d\n", isalpha(d));

	return (0);
}