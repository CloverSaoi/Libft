/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:56:52 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 18:21:22 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

int	ft_checker(char const *c, char d)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == d)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*storage;
	size_t	i;
	int		j;

	if (s1 == NULL || *s1 == '\0')
		return (ft_strdup(""));
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	i = 0;
	while (ft_checker(set, s1[i]) == 1)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_checker(set, s1[j]) == 1)
		j--;
	storage = ft_calloc(sizeof(char), j - i + 2);
	if (storage == NULL)
		return (NULL);
	ft_strlcpy(storage, &s1[i], j - i + 2);
	return (storage);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("lorem ipsum dolor sit amet", "te"));
	return (0);
}*/
