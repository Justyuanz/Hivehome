/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:18:46 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/16 19:32:49 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	j = (unsigned char)c;
	char	*str = (char *)s;

	i = 0;
	while (i < n)
	{
		str[i]  =  j;
		i++;
	}
	return (s);
}
/*// #include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[50];
	int	c;
	size_t	n;

	c = '0';
	n =  4;
	a[4] = '\0';
	//printf("%.3s", (char *)memset(a, c, n));
	printf("%s", (char *)ft_memset(a, c, n));
}8*/
/* %p to print void pointer   %c is a print a character%.3s to print a specific amount of characters in the string
 printf expects the string to be null terminated, so need to add  the \0 at the end of  the string
 
 Type void is not assignable
 void pointers can store memory addresses of any type of data values, like malloc returns a void pointer
 vid *malloc(size_t size)  we cannot dereference void pointers and pointer arithmetic does not always work with void pointer
 *((char*)s) is  typecasting void pointer s to char pointer and then dereference it to get value
 
 */