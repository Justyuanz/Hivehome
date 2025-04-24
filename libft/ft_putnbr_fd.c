#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	long	p;
	char	result;

	p = (long)n;
	result = 0;
	if(p < 0)
	{
		p = -p;
		write(fd, "-", 1);
	}
	if(p > 9)
	{
		ft_putnbr_fd(p / 10, fd);
	}
	result = p % 10 + '0';
	write(fd, &result, 1);
}
#include <stdio.h>
int	main(void)
{
	int	n = 0;
	int fd;

	fd = open("nbr.txt", O_RDWR | O_TRUNC | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("failed");
		return (1);
	}
	else
	{
		ft_putnbr_fd(n, fd);
	}
	close(fd);
}