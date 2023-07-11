/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:12:16 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 18:09:17 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		index;

	str = (const char *)s;
	index = 0;
	if (n == 0)
		return (NULL);
	while (index < n)
	{
		if ((unsigned char)str[index] == (unsigned char)c)
		{
			return ((void *)str + index);
		}
		index ++;
	}
	return (NULL);
}
/*
int main (void)
{
	printf("%s\n", ft_memchr("Hello", 97, 4));
	printf("%s\n", memchr("Hello", 97, 4));
	return (0);
}*/
