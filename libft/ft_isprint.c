/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:43:23 by jinzhang          #+#    #+#             */
/*   Updated: 2025/04/16 11:59:22 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	else
	{
		return (0);
	}
}
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int a;
	int b;
	int e;
	int	c;
	int	d;

	a = ' ';
	b = '5';
	e = 5;
	c = 128;
	d = 22;
	printf("%d ", ft_isprint(a));
	printf("%d\n", isprint(a));
	printf("%d ", ft_isprint(b));
	printf("%d\n", isprint(b));
	printf("%d ", ft_isprint(e));
	printf("%d\n", isprint(e));
	printf("%d ", ft_isprint(c));
	printf("%d\n", isprint(c));
	printf("%d ", ft_isprint(d));
	printf("%d\n", isprint(d));

	return (0);
}