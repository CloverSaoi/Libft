/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:45:01 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/31 18:18:47 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		index;
	const char	*s_1;
	const char	*s_2;

	s_1 = (const char *)s1;
	s_2 = (const char *)s2;
	index = 0;
	while (index < n)
	{
		if (s_1[index] != s_2[index])
			return ((unsigned char)s_1[index] - (unsigned char)s_2[index]);
		index++;
	}
	return (0);
}
/*
int main(void)
{
	int gg = ft_memcmp("/0", "/0", 1);
	int ggg = memcmp("/0", "/0", 1);

	printf("%d \n %d \n", gg, ggg);
	return (0);
}*/	
