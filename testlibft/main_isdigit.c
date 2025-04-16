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
	printf("%d ", ft_isdigit(a));
	printf("%d\n", isdigit(a));
	//system-specific or compiler-specific details that cause isalpha() to return a different non-zero value, such as 1024
	printf("%d ", ft_isdigit(b));
	printf("%d\n", isdigit(b));
	printf("%d ", ft_isdigit(e));
	printf("%d\n", isdigit(e));
	//the computer reads it as asscii value 5 while not putting ' ', which is "Enquiry" in this case
	printf("%d ", ft_isdigit(e));
	printf("%d\n", isdigit(e));
	printf("%d ", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	printf("%d ", ft_isdigit(d));
	printf("%d\n", isdigit(d));

	return (0);
}