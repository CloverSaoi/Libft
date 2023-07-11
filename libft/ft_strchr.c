/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:30:29 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/17 20:36:27 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *str, int c)
{
	size_t		i;
	const char	*return_val;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char)c)
		{
			return_val = &str[i];
			return ((char *)return_val);
		}
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	const char hello[] = "Bello";
	int gg = 101;

	printf("%s\n", ft_strchr(hello, gg));
	printf("%s\n", strchr(hello, gg));
	return (0);
}*/
