#include "libft.h"

/*
overflow should be checked here??If count * size is too big,
	it can overflow and wrap around to a smaller number

we cannot index into void pointer or calculate their size
llocates memory for an array of COUNT objects of SIZE bytes and initializes all bytes in the allocated storage to zero.
count * sizeof(type) just as malloc

count = num of blocks of memories, size is bytes in each block,
	need to zero out all the bytes so count * size
*/

void	*ft_calloc(size_t nmem, size_t size)
{
	size_t			i;
	size_t			totalbytes;
	unsigned char	*ptr;

	i = 0;
	ptr = NULL;
	totalbytes = nmem * size;
	if (nmem == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		return ((void *)ptr);
	}
	if (totalbytes / nmem != size)
		return (NULL);
	ptr = malloc(totalbytes);
	if (ptr == NULL)
		return (NULL);
	while (i < totalbytes)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
