#include <unistd.h>
#include <fcntl.h>
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <stdio.h>
int	main(void)
{
	char a;
	int	fd;

	a = '\0';
	fd = open("bar.txt", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		printf("FAILED\n");
		return (1);
	}
	else
	{
		ft_putchar_fd(a, fd);

	}
	close(fd);
}
