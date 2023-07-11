/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:25:38 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 18:21:39 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					index;
	const unsigned char		*s1_c;
	const unsigned char		*s2_c;

	index = 0;
	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	while ((index < n) && ((s1_c[index] != '\0') || (s2_c[index] != '\0')))
	{
		if ((s1_c[index] < s2_c[index]) || (s1_c[index] > s2_c[index]))
		{
			return (s1_c[index] - s2_c[index]);
		}
		index++;
	}
	return (0);
}
/*
int main(void)
{
	unsigned int hello = 5;
	int gg = ft_strncmp("abcedf", "abc\375xx", hello);
	int ggg = strncmp("abcedf", "abc\375xx",  hello);

	printf("%d \n %d \n", gg, ggg);
	return (0);
}*/
