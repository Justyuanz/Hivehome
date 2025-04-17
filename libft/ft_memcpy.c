/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:55:44 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/17 15:11:52 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	const char	*from;

	i = 0;
	to = (char *)dest;
	from  = (const char *)src;
	while(i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[]="";
	char	dst1[]="";
	char	*src = "456789";
	size_t	n = 3;

	printf("%s\n", (char *)memcpy(dst, src, n));
	printf("%s\n", (char *)ft_memcpy(dst1, src, n));
	/*for(size_t i = 0; i < n; i++)
	{
		printf("%c", dst[i]);
	}*/
}
/*
We do not need to handle the case when the behaviour is said to be undefined because it affects running time
Memcpy is copying memory byte by byte
if  we try to write past the allocated memory of dst, there might be weird garbage output or segfault
If copying strings or part of a string using memcpy, always null-terminate manually if you're going to treat it as a C string e.g. printf("%s")*/