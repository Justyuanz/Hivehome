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
	c = 128;
	d = 22;
	printf("%d ", ft_isprint(a));
	printf("%d\n", isprint(a));
	printf("%d ", ft_isprint(b));
	printf("%d\n", isprint(b));
	printf("%d ", ft_isprint(e));
	printf("%d\n", isprint(e));
	printf("%d ", ft_isprint(c));
	printf("%d\n", isprint(c));
	printf("%d ", ft_isprint(d));
	printf("%d\n", isprint(d));

	return (0);
}