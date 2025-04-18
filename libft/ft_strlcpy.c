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
	
}

#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char dst[50];
	const char src[] = "This is src";
	size_t size = sizeof(src);

	strlcpy(dst, src, size);
	printf("%s", dst);
}

/*
return value of strlcpy is always the length of src,
size_t is result of sizeof operator, sizeof counts the '\0' while strlen does not.
*/