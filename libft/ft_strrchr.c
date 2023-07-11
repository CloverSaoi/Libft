/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:14:19 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/31 16:54:24 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  #include <string.h>
//  #include <stdio.h>

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)(s + index));
	}
	while (index >= 0)
	{
		if (s[index] == (char)c)
		{	
			return ((char *)(s + index));
		}
		index--;
	}
	return (NULL);
}
/*
int main(void)
{
	char source[] = "HelloH";
	int gg = 0;;

	printf("%s\n", ft_strrchr(source, gg));
	printf("%s\n", strrchr(source, gg));
	return (0);
}*/
