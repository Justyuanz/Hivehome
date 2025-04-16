#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int a;
	int b;
	int e;
	int	c;
	int	d;

	a = ' ';
	b = '5';
	e = 5;
	c = 'A';
	d = 'u';
	printf("%d ", ft_isalnum(a));
	printf("%d\n", isalnum(a));
	printf("%d ", ft_isalnum(b));
	printf("%d\n", isalnum(b));
	printf("%d ", ft_isalnum(e));
	printf("%d\n", isalnum(e));
	printf("%d ", ft_isalnum(e));
	printf("%d\n", isalnum(e));
	printf("%d ", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	printf("%d ", ft_isalnum(d));
	printf("%d\n", isalnum(d));

	return (0);
}