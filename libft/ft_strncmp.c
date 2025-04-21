/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:22:32 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/18 14:41:54 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i =  0;
	while( i < n)
	{
		if ((unsigned char)s1[i] == '\0' || (unsigned char)s2[i] == '\0'
				|| (unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	const char *s1 = "asdffg";
	const char *s2 = "asdfg";
	assert(ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
	assert(ft_strncmp(s1, s2, 2) == strncmp(s1, s2, 2));
	assert(ft_strncmp(s1, s2, 6) == strncmp(s1, s2, 6));
	assert(ft_strncmp(s1, s2, 0) == strncmp(s1, s2, 0));
}*/