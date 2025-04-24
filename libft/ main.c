#include "libft.h"
#include <stdio.h>
#include <assert.h>
void	ft_atoi_test(void)
{
  assert(atoi(" -123junk") == ft_atoi(" -123junk"));
  assert(atoi(" +023junk") == ft_atoi(" +023junk"));
  assert(atoi(" 0") == ft_atoi(" 0"));
  assert(atoi("0042") == ft_atoi("0042"));
  assert(atoi("0x2a4") == ft_atoi("0x2a4"));
  assert(atoi("sa") == ft_atoi("sa"));
  assert(atoi("2147483648") == ft_atoi("2147483648"));
}

void	ft_bzero_test(void)
{
	char a[50];
	size_t n = 50;

	ft_bzero(a, n);
	for (size_t i = 0; i < 50; i++)
	{
		printf("%i", a[i]);
	}
}

