
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long p;
	char result;

	p = (long)n;
	result = 0;
	if (p < 0)
	{
		p = -p;
		write(fd, "-", 1);
	}
	if (p > 9)
	{
		ft_putnbr_fd(p / 10, fd);
	}
	result = p % 10 + '0';
	write(fd, &result, 1);
}