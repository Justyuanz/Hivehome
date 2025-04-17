/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:43:46 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/17 16:20:50 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*out;
	char	*in;
	size_t	i;

	i = 0;
	out = (char *)dest;
	in = (char	*)src;
	if(dest <= src)
	{
		while(i < n)
		{
			out[i] = in[i];
			i++;
		}
	}
	else
	{
		while(i < n)
		{
			out[n-1] = in[n-1];
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[50] = "";
	char	*src = "fdfgdffd";
	size_t	n = 5;

	printf("%.5s", (char *)ft_memmove(dest, src, n));
}
/*Copying forward is usually faster on modern CPUs due to memory caching and how the CPU prefetches data. 
it is safe when dest<=src and they still overlap
If dest is after/more(comparing the memory address) than src, to ensure that no data loss occurs, 
the copy must start from the last byte to be copied. 
To find the last byte of src and dest add the number of bytes to be copied (n), minus 1 to exclude the ‘\0' characters.
*/