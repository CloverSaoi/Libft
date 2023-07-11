/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:21:58 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 16:56:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_dup;

	if (s == 0 || f == 0)
	{
		return (NULL);
	}
	i = 0;
	s_dup = ft_strdup(s);
	if (s_dup == 0)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		s_dup[i] = (*f)(i, s_dup[i]);
		i++;
	}
	return (s_dup);
}
