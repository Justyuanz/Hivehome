/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:47:44 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/22 11:00:21 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *s1;

	i = 0;
	s1 = (unsigned char *)s;
	while(i < n)
	{
		if(s1[i] ==(unsigned  char)c)
		{
			return((void *)s1+i);
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
#include <assert.h>
int	main(void)
{
	const char  *s = "This is isg";

	//printf("%.11s", (char  *)ft_memchr(s, c, n));
	assert(memchr(s, 'i', 2) == ft_memchr(s, 'i', 2));
	assert(memchr(s, 'i', 3) == ft_memchr(s, 'i', 3));
	assert(memchr(s, 'i', 10) == ft_memchr(s, 'i', 10));
	assert(memchr(s, 'Y', 11) == ft_memchr(s, 'Y', 11));
}

/*
The  memchr()  and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
the difference between unsigned char pointer and char pointer
why do i need to cast const void * to void * 
*/