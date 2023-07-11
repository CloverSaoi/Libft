/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:26:51 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 18:07:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if (dest == NULL && source == NULL)
		return (NULL);
	i = -1;
	if (source < dest)
		while (++i < len)
			dest[(len - 1) - i] = source[(len - 1) - i];
	else
		while (++i < len)
			dest[i] = source[i];
	return (dest);
}
