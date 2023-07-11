/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:48:44 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/09 18:48:49 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
#include <string.h>
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*d;
	char	to_assign;

	i = 0;
	to_assign = (unsigned char)c;
	d = (char *)b;
	while (i < len)
	{
		d[i] = to_assign;
		i++;
	}
	return (d);
}
/*
int main () {
   char str[50];
   char sstr[] = "Hellothisisdev"; 
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_memset(sstr,'$',7);
   memset(str,'$',7);
   puts(str);
   puts(sstr);
   return (0);
}*/
