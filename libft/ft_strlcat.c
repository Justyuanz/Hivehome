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
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	char	*newdst;
	const char	*newsrc;

	i = 0;
	newdst = dst;
	newsrc = src;
	srclen = ft_strlen(newsrc);
	dstlen = ft_strlen(newdst);
	if(size == 0 || size <= dstlen)
	{
		return (dstlen + srclen);
	}
	else
	{
		while (i < size - dstlen - 1 && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}

#include <stdio.h>
#include<bsd/string.h>
#include <assert.h>
int	main(void)
{
	//char dst[50] = "Hello";
	char dst1[50] = "Hello";
	char *src = "WORLD!!";
	printf("%lu\n", strlcat(dst1, src, 3));
	printf("%s", dst1);
	/*char dst2[50] = "Hello";
	char dst3[50] = "Hello";
	//char dst4[50] = "Hello";
	//char dst5[50] = "Hello";
	char dst6[50] = "Hello";
	char dst7[50] = "Hello";
	const char *src = "World";
	assert(strlcat(dst, src, 20) == ft_strlcat(dst1, src, 20));
	assert(strlcat(dst2, src, 10) == ft_strlcat(dst3, src, 10));
	//assert(strlcat(dst4, src, 1) == ft_strlcat(dst5, src, 1));
	assert(strlcat(dst6, src, 0) == ft_strlcat(dst7, src, 0));*/
}
/*Need temp pointers to work with so the return values are not changed,
while size is 0, does the calculation get messed up?
while size <= destlen, not concate is happening, while size > destlen, concatenate size - destlen - 1 bytes
remember that the '\0' is only added at the end of the concatenated string, that's why dsr[dstlen + i]
the return value is initial dst length and src length, shouldn't be changed, hence creating temp strings for them
dstlen is calculated safely up to size — avoids reading past the buffer.
We avoid writing anything if size == 0*/