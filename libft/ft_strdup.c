/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:59:56 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 18:35:22 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*s1_dup;

	len = ft_strlen(s1) + 1;
	i = 0;
	s1_dup = (char *)ft_calloc(len, sizeof(char));
	if (s1_dup == 0)
	{	
		return (NULL);
	}
	while (i < (len))
	{
		s1_dup[i] = s1[i];
		i++;
	}	
	return (s1_dup);
}
/*
int main (void)
{
	char c[] = "Hello Dev :)";
	
	printf("%s\n %s\n", c, ft_strdup(c));
	return (0);
}*/
