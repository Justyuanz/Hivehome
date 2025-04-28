/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:50:38 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/28 20:02:23 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t is Used for a count of bytes.  It is the result of the sizeof operator.
 * Size of the objects in bytes.
According to the C language standard, it shall be an  un‐
signed  integer  type capable of storing values in the range [0,
SIZE_MAX]. It is used for array indexing, memory sizes,
	or anything related to size/length*/
/*const char is a character that cannot be changed. used for read-only strings,
	or when you want to make sure
a function does not modify the string it receives*/
/*the return type is size_t because strlen() returns the number of bytes rather 
 *than the number of characters in a string.*/

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
