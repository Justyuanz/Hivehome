/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:05:13 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/18 18:10:28 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t s;

	i = 0;
	s = ft_strlen(src);
	if(size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[50];
	const char src[] = "This is src";
	char dst1[50];
	const char src1[] = "This is src";
	char dst2[50];
	const char src2[] = "This is src";
	char dst3[50];
	const char src3[] = "";
	size_t size = sizeof(src);
	size_t size1 = 0;
	size_t size2= 5;
	size_t size3 = 5;
	ft_strlcpy(dst, src, size);
	printf("%s\n", dst);
	ft_strlcpy(dst1, src1, size1);
	printf("%s\n", dst1);
	ft_strlcpy(dst2, src2, size2);
	printf("%s\n", dst2);
	ft_strlcpy(dst3, src3, size3);
	printf("%s\n", dst3);
}

/*
return value of strlcpy is always the length of src,
size_t is result of sizeof operator, sizeof counts the '\0' while strlen does not.
size_t is an unsigned type,When you subtract 1 from 0, you wrap around to the maximum possible value of size_t
(size_t 0)-1 == 18446744073709551615*/