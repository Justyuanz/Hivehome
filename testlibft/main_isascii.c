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
	c = 150;
	d = 153;
	printf("%d ", ft_isascii(a));
	printf("%d\n", isascii(a));
	//Original ASCII contains unsigned (or positive) values from 0 to 127 (128 characters). Extended ASCII uses 8 bits and therefore has 256 potential values.
	printf("%d ", ft_isascii(b));
	printf("%d\n", isascii(b));
	printf("%d ", ft_isascii(e));
	printf("%d\n", isascii(e));
	printf("%d ", ft_isascii(c));
	printf("%d\n", isascii(c));
	printf("%d ", ft_isascii(d));
	printf("%d\n", isascii(d));

	return (0);
}