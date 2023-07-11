/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:59:56 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/30 19:04:04 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*join;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *)ft_calloc(len, sizeof(char));
	if (join == 0)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (i < len && join)
	{
		join[i] = s1[i];
		i++;
	}
	len = ft_strlen(s2);
	while (j < len && join)
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	return (join);
}
