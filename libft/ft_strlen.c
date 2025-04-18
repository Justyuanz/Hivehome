/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:50:38 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/18 15:23:42 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*a;
	const char	*b;
	const char	*c;
	const char	*d;
	const char	*e;
	
	a = "sgfhdf";
	b = "";
	c = "  ";
	d = "fdg  53";
	e = "12";
	printf("%lu ", ft_strlen(a));
	printf("%lu\n", strlen(a));
	printf("%lu ", ft_strlen(b));
	printf("%lu\n", strlen(b));
	printf("%lu ", ft_strlen(c));
	printf("%lu\n", strlen(c));
	printf("%lu ", ft_strlen(d));
	printf("%lu\n", strlen(d));
	printf("%lu ", ft_strlen(e));
	printf("%lu\n", strlen(e));
}
*/
/*size_t is Used for a count of bytes.  It is the result of the sizeof operator. Size of the objects in bytes.
According to the C language standard, it shall be an  un‐
signed  integer  type capable of storing values in the range [0,
SIZE_MAX]. It is used for array indexing, memory sizes, or anything related to size/length*/
/*const char is a character that cannot be changed. used for read-only strings, or when you want to make sure
a function does not modify the string it receives*/
/*the return type is size_t because strlen() returns the number of bytes rather than the number of characters in a string.*/
