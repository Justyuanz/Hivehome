#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
	if(s != NULL)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
#include <stdio.h>
int	main(void)
{
	char	*s = "ABCDE";
	int	fd;

	fd = open("dl.txt", O_RDWR | O_CREAT, 0777);
	if(fd == -1)
	{
		printf("failed");
		return (1);
	}
	else
	{
		ft_putendl_fd(s, fd);
	}
	close(fd);
}