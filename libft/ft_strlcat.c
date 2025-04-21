/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:05:48 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/19 17:28:29 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= dstlen)
	{
		return (size + srclen);
	}
	else
	{
		while( i + 1 < size - dstlen && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + srclen);
	}
}

#include <stdio.h>
#include<string.h>
#include <assert.h>
int	main(void)
{
	char dst[50] = "Hello";
	char dst1[50] = "World";
	const char *src = "is here";
	char dst2[50] = "Hello";
	char dst3[50] = "Hello";
	char dst4[50] = "Hello";
	char dst5[50] = "Hello";
	char dst6[50] = "Hello";
	char dst7[50] = "Hello";
	//assert(strlcat(dst, src, 20) == ft_strlcat(dst1, src, 20));
	printf("%lu\n", ft_strlcat(dst, src, 4));
	printf("%s", dst);
	assert(strlcat(dst2, src, 10) == ft_strlcat(dst3, src, 10));
	assert(strlcat(dst4, src, 1) == ft_strlcat(dst5, src, 1));
	assert(strlcat(dst6, src, 0) == ft_strlcat(dst7, src, 0));
}
/*
Strlcat() tries to concatenate src to the end of dst, but only within a total buffer of size size, including the null terminator.
The return value is not the number of characters copied, but the total length of the string it TRIED to create.  
When size == 0,you are not allowed to even look into the destination buffer. So when size <= dslen, nothing can be appended after dst, it tried to create size + srclen string, but there is no room to fit.
Truncation in strlcat() happens when not all characters from src can be appended to dst because the total would exceed the buffer size (size).
check for trunction: size_t result = strlcat(dst, src, size);  if (result >= size)
when size > dstlen, it tries to create dstlen + srclen length's string, it ends when size is reached and src is not '\0\(safety check);
*/