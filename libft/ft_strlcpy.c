/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:59:56 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 17:43:13 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	size_t i, j;

	i = j = 0;
	char source[] = "Hello";
	char soure[] = "Hello";
	i = ft_strlcpy(source, "GGJcerferferfergerger", 3);
	j = strlcpy(soure, "GGJwrergetgetgetgwewe", 3);

	printf("%zu ::::::::: %zu", i, j);

	return (0);
}*/
