#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}
#include <stdio.h>
int	main(void)
{
	char	*s = "abcde";
	int	fd;

	fd = open("bar.txt", O_WRONLY | O_TRUNC | O_CREAT, 0777);
	if(fd == -1)
	{
		printf("failed\n");
		return(1);
	}
	else
	{
		ft_putstr_fd(s, fd);
	}
	unlink("bar.txt");
	close(fd);
}