/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:27:38 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/20 15:29:47 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			len;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	len = 0;
	while (len < n)
	{
		((char *)dst)[len] = ((char *)src)[len];
		len++;
	}
	return (dst);
}
